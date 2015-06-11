//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "XQueryAtomicType.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryQName : NSObject <XQueryAtomicType, NSCopying>
{
    NSString *_namespaceURI;
    NSString *_localPart;
    NSString *_prefixHint;
}

+ (void)parseQNameString:(id)arg1 toPrefix:(id *)arg2 localPart:(id *)arg3;
+ (void)parseQNameString:(id)arg1 prefixRange:(struct _NSRange *)arg2 localPartRange:(struct _NSRange *)arg3;
+ (id)qname:(id)arg1 forNamespace:(id)arg2;
- (id)XQueryCastAs:(long long)arg1 forContext:(id)arg2;
- (id)XQueryStringValue;
- (long long)XQueryTypeID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)prefixHint;
- (id)localPart;
- (id)namespaceURI;
- (id)initWithLocalPart:(id)arg1 forNamespace:(id)arg2;
- (id)initWithName:(id)arg1 forNamespace:(id)arg2;
- (void)finalize;
- (void)dealloc;

@end

