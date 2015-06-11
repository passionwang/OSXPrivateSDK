/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKRecord, NSError;

// Not exported
@interface CKDFetchedRecordInfo : NSObject
{
    CKRecord *_record;
    NSError *_error;
}

+ (id)infoWithRecord:(id)arg1;
+ (id)infoWithRecord:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;

@end

