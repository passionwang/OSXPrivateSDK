/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class XQueryQName;

// Not exported
@interface XQueryFunctionSignature : NSObject <NSCopying>
{
    XQueryQName *_name;
    unsigned long long _argCount;
}

+ (id)functionSignature:(id)arg1 argCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)argCount;
- (id)name;
- (id)initWithQName:(id)arg1 argCount:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;

@end

