//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLBasePostCellViewModel, NSString;

@protocol JDLFeedCellParentProtocol <NSObject>
- (void)showPostActionsForPostCellViewModel:(JDLBasePostCellViewModel *)arg1;
- (void)voteForPostCellViewModel:(JDLBasePostCellViewModel *)arg1 upvote:(_Bool)arg2 completion:(void (^)(_Bool, SWGPost *))arg3;
- (void)openChannelForPostCellViewModel:(JDLBasePostCellViewModel *)arg1 channel:(NSString *)arg2;
- (void)openHashtagForPostCellViewModel:(JDLBasePostCellViewModel *)arg1 hashtag:(NSString *)arg2;
- (void)openPostForPostCellViewModel:(JDLBasePostCellViewModel *)arg1;

@optional
- (void)openPictureFeedForPostCellViewModel:(JDLBasePostCellViewModel *)arg1;
- (void)giveThanksForPostCellViewModel:(JDLBasePostCellViewModel *)arg1 completion:(void (^)(_Bool))arg2;
@end

