//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface JDLPostFlagSubreason : NSObject
{
    NSNumber *_subreasonId;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}

+ (id)localisedValueForKey:(id)arg1;
+ (id)localizedSubtitle:(long long)arg1 index:(int)arg2;
+ (id)localizedTitle:(long long)arg1 index:(int)arg2;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSNumber *subreasonId; // @synthesize subreasonId=_subreasonId;
- (void).cxx_destruct;
- (id)initWithReason:(long long)arg1 index:(int)arg2;

@end

