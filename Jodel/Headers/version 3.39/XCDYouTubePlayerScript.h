//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext, JSValue;

@interface XCDYouTubePlayerScript : NSObject
{
    JSContext *_context;
    JSValue *_signatureFunction;
}

@property(retain, nonatomic) JSValue *signatureFunction; // @synthesize signatureFunction=_signatureFunction;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)unscrambleSignature:(id)arg1;
- (id)initWithString:(id)arg1;

@end

