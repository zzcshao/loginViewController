//
//  loginViewController.h
//  hnmsw
//
//  Created by Alex_LLy on 2017/3/29.
//  Copyright © 2017年 Alex_LLy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    logModel,
    registModel,
    forgetModel,
    changeModel,
}loginModel;

@interface loginViewController : UIViewController

-(void)showAndSuperController:(UIViewController *)superVC;
+ (instancetype)sharedLoginViewWithModel:(loginModel)model;

@property (weak, nonatomic) IBOutlet UIButton *weboIcon;
@property (weak, nonatomic) IBOutlet UIButton *QQIcon;
@property (weak, nonatomic) IBOutlet UIButton *wechatIcon;
@property (weak, nonatomic) IBOutlet UILabel *logLabel;

@end
