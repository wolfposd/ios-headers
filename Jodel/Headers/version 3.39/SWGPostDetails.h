//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray<SWGPost>, NSNumber, NSString, SWGPost;

@interface SWGPostDetails : SWGObject
{
    SWGPost *_details;
    NSArray<SWGPost> *_replies;
    NSString *_next;
    NSNumber *_remaining;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *remaining; // @synthesize remaining=_remaining;
@property(retain, nonatomic) NSString *next; // @synthesize next=_next;
@property(retain, nonatomic) NSArray<SWGPost> *replies; // @synthesize replies=_replies;
@property(retain, nonatomic) SWGPost *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (id)init;

@end

