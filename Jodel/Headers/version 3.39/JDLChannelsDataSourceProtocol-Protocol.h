//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLChannelCellViewModel, NSIndexPath, NSString, RACSubject;

@protocol JDLChannelsDataSourceProtocol <NSObject>
@property(retain, nonatomic) RACSubject *shouldRefreshChannelsList;
- (_Bool)shouldShowSuggestedChannels;
- (_Bool)shouldShowHeaderForSection:(unsigned long long)arg1;
- (_Bool)shouldShowEmptyCellForFirstSection;
- (JDLChannelCellViewModel *)channelAtIndexPath:(NSIndexPath *)arg1;
- (long long)rowsCountForSection:(unsigned long long)arg1;
- (NSString *)footerMessage;
- (long long)numberOfSections;
@end

