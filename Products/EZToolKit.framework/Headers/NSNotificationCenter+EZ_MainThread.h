//
//  NSNotificationCenter+EZ_MainThread.h
//  EZToolKit
//
//  Created by yangjun zhu on 16/3/2.
//  Copyright © 2016年 Cactus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNotificationCenter (EZ_MainThread)
/**
 *  @brief  在主线程中发送一条通知
 *
 *  @param notification NSNotification对象
 */
- (void)ez_postNotificationOnMainThread:(NSNotification *)notification;
/**
 *  @brief  在主线程中发送一条通知
 *
 *  @param aName    用来生成新通知的通知名称
 *  @param anObject 通知携带的对象
 */
- (void)ez_postNotificationOnMainThreadName:(NSString *)aName object:(id)anObject;
/**
 *  @brief  在主线程中发送一条通知
 *
 *  @param aName     用来生成新通知的通知名称
 *  @param anObject  通知携带的对象
 *  @param aUserInfo 通知携带的用户信息
 */
- (void)ez_postNotificationOnMainThreadName:(NSString *)aName object:(id)anObject userInfo:(NSDictionary *)aUserInfo;
@end
