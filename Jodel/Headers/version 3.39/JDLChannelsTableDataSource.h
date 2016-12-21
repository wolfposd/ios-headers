//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDLChannelSearchViewModel, JDLChannelsViewModel, NSString, RACDisposable, RACSignal, UITableView;

@interface JDLChannelsTableDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    id <JDLChannelsDataSourceProtocol> _dataSource;
    RACSignal *_openMoreChannels;
    RACSignal *_didScroll;
    UITableView *_tableView;
    RACDisposable *_suggestedCellSubscription;
    JDLChannelsViewModel *_viewModel;
    JDLChannelSearchViewModel *_searchViewModel;
}

@property(retain, nonatomic) JDLChannelSearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) JDLChannelsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RACDisposable *suggestedCellSubscription; // @synthesize suggestedCellSubscription=_suggestedCellSubscription;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) RACSignal *didScroll; // @synthesize didScroll=_didScroll;
@property(retain, nonatomic) RACSignal *openMoreChannels; // @synthesize openMoreChannels=_openMoreChannels;
@property(retain, nonatomic) id <JDLChannelsDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapShowAll;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getEmptyCellAtIndexPat:(id)arg1 forTable:(id)arg2;
- (id)getChannelCellAtIndexPath:(id)arg1 forTable:(id)arg2;
- (id)getSuggestecChannelsCellForTable:(id)arg1;
- (_Bool)showNotFollowingChannelsEmptyLabelForSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)getRecommendedChannelsHeader:(id)arg1;
- (id)getChannelsHeader:(id)arg1;
- (id)getNotificationsHeader:(id)arg1;
- (id)getSuggestedChannelsHeader:(struct CGRect)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1 viewModel:(id)arg2 searchViewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

