//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SWGModerationPost, SWGPost;

@interface JDLModerationViewModel : NSObject
{
    SWGModerationPost *_currentPost;
    SWGPost *_pictureOfTheDayPost;
    NSMutableArray *_posts;
    NSObject *_lock;
}

@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *posts; // @synthesize posts=_posts;
@property(retain, nonatomic) SWGPost *pictureOfTheDayPost; // @synthesize pictureOfTheDayPost=_pictureOfTheDayPost;
@property(copy, nonatomic) SWGModerationPost *currentPost; // @synthesize currentPost=_currentPost;
- (void).cxx_destruct;
- (void)refreshCurrentPost;
- (void)sendAsyncKarmaFetchRequest;
- (id)sendDecision:(long long)arg1;
- (void)fetchModerationTasks:(CDUnknownBlockType)arg1;
- (id)init;

@end

