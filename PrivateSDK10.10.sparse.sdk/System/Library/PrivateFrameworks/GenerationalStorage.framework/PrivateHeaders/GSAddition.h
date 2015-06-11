/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSNumber, NSObject<GSAdditionStoring>, NSObject<GSAdditionStoring><GSAdditionStoringPrivate>, NSString, NSURL;

@interface GSAddition : NSObject
{
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> *_storage;
    unsigned long long _options;
    NSNumber *_size;
    NSString *_namespace;
    NSURL *_url;
    NSString *_originalName;
    NSString *_displayName;
    NSDictionary *_userInfo;
}

+ (id)makeNameForUser:(unsigned int)arg1 name:(id)arg2;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_namespace;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)replaceItemAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)copyAdditionContentToURL:(id)arg1 error:(id *)arg2;
- (BOOL)internalStat:(struct stat *)arg1;
- (BOOL)mergeUserInfo:(id)arg1 error:(id *)arg2;
- (BOOL)setNameSpace:(id)arg1 error:(id *)arg2;
- (BOOL)setDisplayName:(id)arg1 error:(id *)arg2;
- (BOOL)setOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)_initWithStorage:(id)arg1 andDictionary:(id)arg2;
- (void)_refreshWithDictionary:(id)arg1;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)refreshWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (id)userInfoWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *originalPOSIXName;
- (id)originalPOSIXNameWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameWithError:(id *)arg1;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSNumber *size;
@property(readonly, nonatomic) BOOL isSavedConflict;
@property(readonly, nonatomic) NSData *sandboxExtension;

@end

