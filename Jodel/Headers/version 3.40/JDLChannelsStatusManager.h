//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface JDLChannelsStatusManager : NSObject
{
    id <JDLChannelsNotificationsStorableProtocol> _notificationsStorage;
    NSArray *_channelsStatus;
    NSArray *_recommendedChannels;
    NSArray *_localTrends;
}

@property(retain, nonatomic) NSArray *localTrends; // @synthesize localTrends=_localTrends;
@property(retain, nonatomic) NSArray *recommendedChannels; // @synthesize recommendedChannels=_recommendedChannels;
@property(retain, nonatomic) NSArray *channelsStatus; // @synthesize channelsStatus=_channelsStatus;
@property(retain, nonatomic) id <JDLChannelsNotificationsStorableProtocol> notificationsStorage; // @synthesize notificationsStorage=_notificationsStorage;
- (void).cxx_destruct;
- (_Bool)isSponsoredChannel:(id)arg1;
- (void)updateChannel:(id)arg1 followersCount:(long long)arg2;
- (id)getLocalTrends;
- (id)getRecommendedChannels;
- (id)numberOfFollowersForFollowedChannel:(id)arg1;
- (void)updateChannelsStatus:(CDUnknownBlockType)arg1;
- (void)updateRecommendedChannels;
- (_Bool)hasNotificationForChannel:(id)arg1;
- (_Bool)hasChannelWithNotification;
- (void)refreshNotificationsForFollowedChannels:(id)arg1;
- (void)addChannelsWithNotifications:(id)arg1;
- (id)getChannelsWithNotifications;
- (void)saveChannelOpenIfMissing:(id)arg1;
- (void)saveChannelOpen:(id)arg1;
- (id)getChannelOpensTimestamps;
- (void)clearRecordsForChannel:(id)arg1;
- (id)initWithStorable:(id)arg1;

@end

