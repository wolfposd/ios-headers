//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableDictionary, NSString, UITableView;

@interface JDLFeedTableViewSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _scrollingToTop;
    CDUnknownBlockType _downScrollLoadMore;
    CDUnknownBlockType _upScrollLoadMore;
    CDUnknownBlockType _didScrollToTop;
    id <JDLFeedViewModelSourceProtocol> _viewModel;
    UITableView *_tableView;
    NSMutableDictionary *_cellsCachedEstimatedHeight;
}

@property(nonatomic) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(retain, nonatomic) NSMutableDictionary *cellsCachedEstimatedHeight; // @synthesize cellsCachedEstimatedHeight=_cellsCachedEstimatedHeight;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <JDLFeedViewModelSourceProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType didScrollToTop; // @synthesize didScrollToTop=_didScrollToTop;
@property(copy, nonatomic) CDUnknownBlockType upScrollLoadMore; // @synthesize upScrollLoadMore=_upScrollLoadMore;
@property(copy, nonatomic) CDUnknownBlockType downScrollLoadMore; // @synthesize downScrollLoadMore=_downScrollLoadMore;
- (void).cxx_destruct;
- (_Bool)isLoadMoreReachedForScrollView:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)cellEstimatedHeightCacheKeyForIndexPath:(id)arg1;
- (void)cacheCellEstimatedHeight:(double)arg1 forIndexPath:(id)arg2;
- (double)cachedEstimatedCellHeightForIndexPath:(id)arg1;
- (void)invalidateCellEstimatedHeightForIndexPath:(id)arg1;
- (void)dealloc;
- (id)cellViewModelAtIndexPath:(id)arg1;
- (void)setupSourceForTableView:(id)arg1 cellSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

