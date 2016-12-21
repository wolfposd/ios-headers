//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RLTAnalyticsBModuleButtonWrapperProtocol.h"

@class NSString, UIControl, UIViewController;

@interface RLTAnalyticsBModuleUIControlWrapper : NSObject <RLTAnalyticsBModuleButtonWrapperProtocol>
{
    UIControl *_instance;
    NSString *_label;
    UIViewController *_parentViewController;
}

@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) UIControl *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)traverseResponderChainForElement:(id)arg1;
- (id)getDefaultLabelWithTagFormat:(id)arg1;
- (id)initWithUIControl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

