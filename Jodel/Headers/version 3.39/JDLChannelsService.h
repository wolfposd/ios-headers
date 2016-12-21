//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLChannelsStatusManager, NSMutableArray, NSNumber;

@interface JDLChannelsService : NSObject
{
    JDLChannelsStatusManager *_channelsStatusManager;
    NSMutableArray *_channels;
    NSNumber *_maxChannels;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *maxChannels; // @synthesize maxChannels=_maxChannels;
@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) JDLChannelsStatusManager *channelsStatusManager; // @synthesize channelsStatusManager=_channelsStatusManager;
- (void).cxx_destruct;
- (_Bool)isSponsoredChannel:(id)arg1;
- (id)numberOfFollowersForFollowedChannel:(id)arg1;
- (_Bool)hasNotificationForFollowedChannel:(id)arg1;
- (void)updateChannelsStatus;
- (id)getChannelsWithNotifications;
- (_Bool)hasChannelWithNotification;
- (void)saveChannelOpen:(id)arg1;
- (id)matchingChannelsForChannel:(id)arg1;
- (id)getLocalTrends;
- (id)getRecommendedChannels;
- (id)followedChannels;
- (unsigned long long)followedChannelsCount;
- (void)removeChannel:(id)arg1;
- (void)addChannel:(id)arg1;
- (_Bool)isChannelFollowed:(id)arg1;
- (void)saveChannels;
- (long long)maxPossibleFollowedChannelsCount;
- (void)updateChannel:(id)arg1 followersCount:(long long)arg2;
- (void)unfollowChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveFollowedChannels:(id)arg1 maxLimit:(id)arg2;
- (id)getCurrentChannelsPrefix;
- (_Bool)shouldEnableChannels;
- (id)init;
- (void)dealloc;

@end

