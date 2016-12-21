//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber, NSString, SWGLocation;

@interface SWGCreatePostRequest : SWGObject
{
    NSString *_color;
    NSString *_message;
    NSString *_image;
    NSString *_ancestor;
    NSString *_channel;
    NSNumber *_toHome;
    SWGLocation *_location;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
+ (id)createPostWithMessage:(id)arg1 ancestorPost:(id)arg2 color:(id)arg3;
+ (id)createPostWithMessage:(id)arg1 image:(id)arg2 ancestorPost:(id)arg3 color:(id)arg4;
@property(retain, nonatomic) SWGLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *toHome; // @synthesize toHome=_toHome;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *ancestor; // @synthesize ancestor=_ancestor;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;

@end

