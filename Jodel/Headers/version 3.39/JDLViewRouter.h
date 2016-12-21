//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDLViewRouter : NSObject
{
}

+ (id)sharedInstance;
- (void)navigateToPictureFeedForPost:(id)arg1 feedType:(long long)arg2 order:(long long)arg3;
- (void)navigateToLink:(id)arg1;
- (void)navigateToFlaggingForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToSubfeedForPost:(id)arg1 scrollToBottom:(_Bool)arg2;
- (id)navigationController;
- (void)navigateToModeration;
- (void)navigateToChannel:(id)arg1;
- (void)navigateToHashtag:(id)arg1;
- (void)navigateToModerationContext:(id)arg1 withParentId:(id)arg2 postColor:(id)arg3 feedType:(long long)arg4 rootFeetOrder:(long long)arg5;
- (void)navigateToPostWithId:(id)arg1 postColorString:(id)arg2 feedType:(long long)arg3 rootFeedOrder:(long long)arg4;
- (void)navigateToPost:(id)arg1 feedType:(long long)arg2 rootFeedOrder:(long long)arg3 scrollToBottom:(_Bool)arg4 channel:(id)arg5 hashtag:(id)arg6 linksVisible:(_Bool)arg7;
- (void)navigateToPost:(id)arg1 feedType:(long long)arg2 rootFeedOrder:(long long)arg3 scrollToBottom:(_Bool)arg4;
- (void)navigateToMyPosts;
- (void)navigateToMyPins;
- (void)navigateToMyVotes;
- (void)navigateToMyReplies;

@end

