//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@protocol JDLSingleFeedFetchServiceProtocol <NSObject>
- (NSNumber *)fetchPostsForFeedOrder:(long long)arg1 afterId:(NSString *)arg2 skip:(long long)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
@end

