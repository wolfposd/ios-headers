//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RLTConfigConfiguration.h"

#import "NSURLSessionDelegate.h"

@class NSArray, NSString;

@interface RLTConfigConfigurationWithCertPinning : RLTConfigConfiguration <NSURLSessionDelegate>
{
    NSArray *_pinnedCertificates;
}

@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
- (void).cxx_destruct;
- (void)checkForPinnedCertificates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readPinnedCerts;
- (id)initWithServerURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

