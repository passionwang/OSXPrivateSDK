//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject
{
    const char *mUri;
    struct _xmlDoc *mDocument;
    struct _xmlNs *mDocumentNamespace;
}

+ (void)clearRegisteredNamespaces;
+ (BOOL)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;
+ (BOOL)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;
+ (BOOL)isNamespaceSupported:(const char *)arg1;
+ (void)registerNamespace:(id)arg1;
- (const char *)uri;
- (BOOL)containsAttribute:(struct _xmlAttr *)arg1;
- (BOOL)containsNode:(struct _xmlNode *)arg1;
- (id)initUnsupportedNsWithUri:(const char *)arg1;
- (id)initWithUri:(const char *)arg1;

@end

