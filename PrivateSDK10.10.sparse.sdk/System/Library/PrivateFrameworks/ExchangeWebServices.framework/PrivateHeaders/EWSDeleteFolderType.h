/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteFolderType : EWSBaseRequestType
{
    NSArray *_FolderIds;
    int _DeleteType;
}

+ (id)definition;
@property(nonatomic) int DeleteType; // @synthesize DeleteType=_DeleteType;
@property(copy, nonatomic) NSArray *FolderIds; // @synthesize FolderIds=_FolderIds;
- (void)dealloc;

@end

