//
//  UIViewController+ZBToastHUD.h
//  ZBToastHUD
//
//  Created by yuanye on 2016/10/28.
//  Copyright © 2016年 yuanye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBToastHUD.h"

@interface UIViewController (ZBToastHUD)

// loading

- (void)zb_showLoading;
- (void)zb_showLoadingWithStyle:(ZBToastHUDLoadingStyle)style;
- (void)zb_showLoadingWithMaskType:(ZBToastHUDLoadingMaskType)maskType;
- (void)zb_showLoadingWithStyle:(ZBToastHUDLoadingStyle)style maskType:(ZBToastHUDLoadingMaskType)maskType;

- (void)zb_dismissLoading;
- (void)zb_dismissLoadingWithCompletion:(ZBToastHUDLoadingDismissCompletion)completion;
- (void)zb_dismissLoadingWithDelay:(NSTimeInterval)delay;
- (void)zb_dismissLoadingWithDelay:(NSTimeInterval)delay completion:(ZBToastHUDLoadingDismissCompletion)completion;

// toast

- (void)zb_showWithMessage:(NSString *)message;

- (void)zb_showNoNetwork;                                          // 无网络连接
- (void)zb_showSuccessWithMessage:(NSString *)message;             // 对勾
- (void)zb_showErrorWithMessage:(NSString *)message;               // 叉叉
- (void)zb_showWarningWithMessage:(NSString *)message;             // 叹号
- (void)zb_showImage:(UIImage *)image message:(NSString *)message; // use 24*24 image

- (void)zb_dismissToast;

@end
