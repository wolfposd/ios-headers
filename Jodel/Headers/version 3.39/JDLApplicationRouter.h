//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLTabBarControllerDelegate;

@interface JDLApplicationRouter : NSObject
{
    JDLTabBarControllerDelegate *_tabBarControllerDelegate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) JDLTabBarControllerDelegate *tabBarControllerDelegate; // @synthesize tabBarControllerDelegate=_tabBarControllerDelegate;
- (void).cxx_destruct;
- (unsigned long long)replyScreenTypeForShortcutType:(id)arg1;
- (id)destinationViewControllerForShortcutItem:(id)arg1;
- (_Bool)handleQuickActionFromShortcutItem:(id)arg1;
- (void)handleOpenWithPushNotification:(id)arg1 source:(id)arg2;
- (void)handleOpenAfterDelayWithPushData:(id)arg1;
- (void)checkToSwitchToMainViewController;
- (void)changeRootViewControllerTo:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)rootWindow;
- (void)showMainScreenWithPushData:(id)arg1 shortcutItem:(id)arg2;
- (id)mainTabBarController;
- (void)showRegistrationViewController;

@end

