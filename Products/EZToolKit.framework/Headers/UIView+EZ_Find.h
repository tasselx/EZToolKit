//
//  UIView+EZ_Find.h
//  EZToolKit
//
//  Created by yangjun zhu on 15/11/27.
//  Copyright © 2015年 Cactus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (EZ_Find)
@property (readonly) UIViewController *ez_viewController;

- (id)ez_findSubViewWithSubViewClass:(Class)clazz;
- (id)ez_findsuperViewWithSuperViewClass:(Class)clazz;

- (BOOL)ez_findAndResignFirstResponder;
- (UIView *)ez_findFirstResponder;


@end
