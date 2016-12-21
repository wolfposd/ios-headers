//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class JDLErrorMessageView, RACDisposable;

@interface JDLNetworkCheckingBaseViewController : UIViewController
{
    _Bool _displayingNetworkError;
    JDLErrorMessageView *_errorNetworkView;
    RACDisposable *_errorMessagesSubscription;
}

@property(retain, nonatomic) RACDisposable *errorMessagesSubscription; // @synthesize errorMessagesSubscription=_errorMessagesSubscription;
@property(nonatomic) _Bool displayingNetworkError; // @synthesize displayingNetworkError=_displayingNetworkError;
@property(retain, nonatomic) JDLErrorMessageView *errorNetworkView; // @synthesize errorNetworkView=_errorNetworkView;
- (void).cxx_destruct;
- (_Bool)disableAutomaticNetworkErrorMessageView;
- (id)networkErrorViewAttachmentView;
- (void)dismissErrorView;
- (void)displayErrorMessageView;
- (void)initialiseErrorView;
- (void)showNetworkConnectionErrorMessage;
- (void)showErrorMessage:(id)arg1;
- (void)subscribeToErrorMessageSignal:(id)arg1;
- (void)checkInternetConnection;
- (void)viewDidAppear:(_Bool)arg1;

@end

