//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDLPictureFetchService, NSArray, SWGPost;

@interface JDLPictureFeedViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _endIsHere;
    SWGPost *_post;
    long long _order;
    long long _type;
    long long _currentIndex;
    NSArray *_posts;
    JDLPictureFetchService *_fetchService;
}

@property(retain, nonatomic) JDLPictureFetchService *fetchService; // @synthesize fetchService=_fetchService;
@property(nonatomic) _Bool endIsHere; // @synthesize endIsHere=_endIsHere;
@property(retain, nonatomic) NSArray *posts; // @synthesize posts=_posts;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) SWGPost *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)pictureFeedDidOpen;
- (_Bool)shouldShowHint;
- (id)currentPost;
- (_Bool)isItTimeToLoadMore:(id)arg1;
- (void)openPost:(id)arg1;
- (unsigned long long)arrowTypesForCurrentIndex;
- (id)postAtIndexPath:(id)arg1;
- (_Bool)isTheLastCell:(id)arg1;
- (long long)numberOfCells;
- (void)fetchMore;
- (unsigned long long)addFetchedPosts:(id)arg1;
- (void)fetchInitialPosts;
- (id)initWithPost:(id)arg1 type:(long long)arg2 order:(long long)arg3;

@end

