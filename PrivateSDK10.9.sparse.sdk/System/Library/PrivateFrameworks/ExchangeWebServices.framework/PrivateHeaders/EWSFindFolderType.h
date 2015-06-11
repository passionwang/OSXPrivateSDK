//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSBasePagingType, EWSFolderResponseShapeType, EWSRestrictionType, NSArray;

@interface EWSFindFolderType : EWSBaseRequestType
{
    EWSFolderResponseShapeType *FolderShape;
    EWSBasePagingType *Paging;
    EWSRestrictionType *Restriction;
    NSArray *ParentFolderIds;
    int Traversal;
}

+ (id)definition;
@property(nonatomic) int Traversal; // @synthesize Traversal;
@property(retain, nonatomic) NSArray *ParentFolderIds; // @synthesize ParentFolderIds;
@property(retain, nonatomic) EWSRestrictionType *Restriction; // @synthesize Restriction;
@property(retain, nonatomic) EWSBasePagingType *Paging; // @synthesize Paging;
@property(retain, nonatomic) EWSFolderResponseShapeType *FolderShape; // @synthesize FolderShape;
- (void)dealloc;

@end

