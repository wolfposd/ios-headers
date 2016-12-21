//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface JSONModelClassProperty : NSObject
{
    _Bool _isOptional;
    _Bool _isStandardJSONType;
    _Bool _isMutable;
    _Bool _convertsOnDemand;
    _Bool _isIndex;
    int _getterType;
    NSString *_name;
    Class _type;
    NSString *_structName;
    NSString *_protocol;
    SEL _customGetter;
    NSMutableDictionary *_customSetters;
}

@property(retain, nonatomic) NSMutableDictionary *customSetters; // @synthesize customSetters=_customSetters;
@property(nonatomic) SEL customGetter; // @synthesize customGetter=_customGetter;
@property(nonatomic) int getterType; // @synthesize getterType=_getterType;
@property(nonatomic) _Bool isIndex; // @synthesize isIndex=_isIndex;
@property(nonatomic) _Bool convertsOnDemand; // @synthesize convertsOnDemand=_convertsOnDemand;
@property(nonatomic) _Bool isMutable; // @synthesize isMutable=_isMutable;
@property(nonatomic) _Bool isStandardJSONType; // @synthesize isStandardJSONType=_isStandardJSONType;
@property(nonatomic) _Bool isOptional; // @synthesize isOptional=_isOptional;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(nonatomic) Class type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

