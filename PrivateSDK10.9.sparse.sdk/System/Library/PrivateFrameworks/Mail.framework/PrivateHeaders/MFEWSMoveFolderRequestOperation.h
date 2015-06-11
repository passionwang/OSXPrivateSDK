//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding.h"

@class MFEWSGetFolderResponseOperation, NSArray, NSString;

@interface MFEWSMoveFolderRequestOperation : MFEWSRequestOperation <NSCoding>
{
    NSString *_destinationEWSFolderIdString;
    MFEWSGetFolderResponseOperation *_changeKeysResponse;
    NSArray *_originEWSFolderIdStrings;
}

+ (Class)classForResponse;
@property(readonly, nonatomic) NSArray *originEWSFolderIdStrings; // @synthesize originEWSFolderIdStrings=_originEWSFolderIdStrings;
@property(readonly, nonatomic) MFEWSGetFolderResponseOperation *changeKeysResponse; // @synthesize changeKeysResponse=_changeKeysResponse;
@property(readonly, nonatomic) NSString *destinationEWSFolderIdString; // @synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString;
- (void)setupOfflineResponse;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (void)dealloc;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_ewsMoveFolderRequestCommonInitWithEWSFolderIdString:(id)arg1 originEWSFolderIdStrings:(id)arg2 gateway:(id)arg3;
- (id)initWithEWSFolderIdString:(id)arg1 originEWSFolderIdStrings:(id)arg2 gateway:(id)arg3;

@end

