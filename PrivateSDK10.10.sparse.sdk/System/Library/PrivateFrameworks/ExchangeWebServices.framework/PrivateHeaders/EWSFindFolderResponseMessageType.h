/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class EWSFindFolderParentType;

@interface EWSFindFolderResponseMessageType : EWSResponseMessageType
{
    EWSFindFolderParentType *_RootFolder;
}

+ (id)definition;
@property(retain, nonatomic) EWSFindFolderParentType *RootFolder; // @synthesize RootFolder=_RootFolder;
- (void)dealloc;

@end

