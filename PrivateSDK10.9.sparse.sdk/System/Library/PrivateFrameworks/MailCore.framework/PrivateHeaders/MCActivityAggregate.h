//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArrayController, NSDate, NSString;

@interface MCActivityAggregate : NSObject
{
    NSArrayController *_monitorController;
    unsigned long long _baseItemsDone;
    unsigned long long _baseItemsTotal;
    double _baseUnifiedDone;
    BOOL _isResetting;
    double _startTime;
    BOOL _canCancel;
    BOOL _isProgressing;
    long long _activityType;
    NSString *_bkItemDescription;
    double _estimatedTimeRemaining;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    NSDate *_lastUpdateTimestamp;
    NSString *_nameSingular;
    NSString *_namePlural;
    double _progress;
    NSString *_status;
    double _unifiedDone;
}

+ (id)keyPathsForValuesAffectingIsProgressIndeterminate;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) double unifiedDone; // @synthesize unifiedDone=_unifiedDone;
@property(copy) NSString *status; // @synthesize status=_status;
@property(readonly) double progress; // @synthesize progress=_progress;
@property(copy) NSString *namePlural; // @synthesize namePlural=_namePlural;
@property(copy) NSString *nameSingular; // @synthesize nameSingular=_nameSingular;
@property(retain) NSDate *lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(readonly) unsigned long long itemsTotal; // @synthesize itemsTotal=_itemsTotal;
@property(readonly) unsigned long long itemsDone; // @synthesize itemsDone=_itemsDone;
@property(readonly) BOOL isProgressing; // @synthesize isProgressing=_isProgressing;
@property(readonly) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(readonly) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(copy) NSString *bkItemDescription; // @synthesize bkItemDescription=_bkItemDescription;
@property long long activityType; // @synthesize activityType=_activityType;
- (void)signalCancel:(id)arg1;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_processMonitorUpdate;
- (void)_update;
- (void)_updateTimeBasedValues;
- (void)updateUnitBasedValues;
- (void)_updateAggregateValues;
- (void)_updateAggregateIsProgressing;
- (void)removeActivityMonitor:(id)arg1;
- (void)addActivityMonitor:(id)arg1;
- (void)reset;
- (void)_updateStatus;
@property(readonly) BOOL isProgressIndeterminate;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setIsProgressing:(BOOL)arg1;
- (void)setCanCancel:(BOOL)arg1;
- (void)setUnifiedDone:(double)arg1;
- (void)setItemsTotal:(unsigned long long)arg1;
- (void)setItemsDone:(unsigned long long)arg1;
- (unsigned long long)currentItem;
@property(readonly) NSArrayController *monitorController;
- (void)dealloc;
- (id)init;

@end

