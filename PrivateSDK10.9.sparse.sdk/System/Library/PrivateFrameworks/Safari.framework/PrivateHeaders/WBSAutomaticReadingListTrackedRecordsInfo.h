//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WBSAutomaticReadingListRecordRange;

__attribute__((visibility("hidden")))
@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject
{
    WBSAutomaticReadingListRecordRange *_rangeOfTrackedRecords;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) WBSAutomaticReadingListRecordRange *rangeOfTrackedRecords; // @synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords;
- (void)dealloc;

@end

