//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCRTextMarker : NSObject
{
    unsigned long long _index;
    struct __AXTextMarker *_marker;
}

+ (BOOL)marker:(id)arg1 precedesMarker:(id)arg2 forUIElement:(id)arg3;
+ (unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2 forUIElement:(id)arg3;
+ (BOOL)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2 forUIElement:(id)arg3;
+ (id)markerWithAXTextMarker:(struct __AXTextMarker *)arg1;
+ (id)markerWithIndex:(unsigned long long)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMarker:(struct __AXTextMarker *)arg1;
- (struct __AXTextMarker *)marker;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithAXTextMarker:(struct __AXTextMarker *)arg1;

@end

