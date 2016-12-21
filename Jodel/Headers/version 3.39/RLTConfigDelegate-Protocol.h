//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL;

@protocol RLTConfigDelegate <NSObject>

@optional
- (void)rltConfigParsedWithDuration:(unsigned long long)arg1;
- (void)rltConfigFetchedFromServerWithDuration:(unsigned long long)arg1;
- (void)rltConfigFetchingFromServerFailedWithError:(NSError *)arg1;
- (void)rltConfigFetchingFromServerStartedWithURL:(NSURL *)arg1;
- (void)rltConfigFetchingFromServerSkippedWithError:(NSError *)arg1;
- (void)rltConfigFetchingFromServerSkipped;
@end

