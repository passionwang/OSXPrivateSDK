//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocationManager, CalUserNotificationCenterCache, NSMutableDictionary, NSUserNotificationCenter;

@interface CalUserNotificationCenter : NSObject
{
    NSUserNotificationCenter *_icalCenter;
    CalUserNotificationCenterCache *_icalCenterCache;
    NSUserNotificationCenter *_reminderCenter;
    CalUserNotificationCenterCache *_reminderCenterCache;
    CLLocationManager *_locationManager;
    NSMutableDictionary *_monitoredRegionsCache;
}

+ (id)defaultCenter;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)dealloc;
- (BOOL)notification:(id)arg1 isEqualToNotification:(id)arg2;
- (id)cacheForAppID:(id)arg1;
- (id)centerForAppID:(id)arg1;
- (BOOL)isCorrectVersion:(id)arg1;
- (void)addDeliveredNotifications:(id)arg1 forAppID:(id)arg2;
- (void)resetCaches;
- (BOOL)isSnoozeNotification:(id)arg1;
- (BOOL)isMonitored:(id)arg1;
- (BOOL)isSimilarDelivered:(id)arg1;
- (BOOL)isDelivered:(id)arg1;
- (BOOL)isDisplayed:(id)arg1;
- (BOOL)isScheduled:(id)arg1;
- (void)removeNotificationsWithOldVersion;
- (void)removeMonitoredAlarmWithID:(id)arg1;
- (void)removeDeliveredNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3;
- (void)removeDisplayedNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3;
- (void)removeScheduledNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3;
- (void)removeDeliveredMessageWithID:(id)arg1;
- (void)removeDeliveredEventWithID:(id)arg1;
- (void)removeDisplayedMessageWithID:(id)arg1;
- (void)removeDeliveredAlarmWithID:(id)arg1;
- (void)removeFiringAlarmWithID:(id)arg1;
- (void)removeScheduledAlarmWithID:(id)arg1;
- (void)removeAlarmWithID:(id)arg1;
- (id)monitoredAlarmIDs;
- (id)scheduledNotificationsOfType:(id)arg1 forApp:(id)arg2;
- (id)deliveredNotificationsOfType:(id)arg1 forApp:(id)arg2;
- (id)displayedNotificationsOfType:(id)arg1 forApp:(id)arg2;
- (id)currentlyDeliveredMessages;
- (id)currentlyDisplayedMessages;
- (id)currentlyDeliveredEvents;
- (id)currentlyDeliveredAlarms;
- (id)currentlyScheduledAlarms;
- (id)currentlyFiringAlarms;
- (void)tearDownLocationManagerIfNeeded;
- (void)_setupLocationManagerAndCheckMonitoredRegions:(BOOL)arg1;
- (void)setupLocationManagerForNewRegion;
- (void)setupLocationManagerOnLaunch;
- (void)stopMonitoringLocations;
- (BOOL)monitorLocationForAlarm:(id)arg1;
- (BOOL)fireAlarmNotification:(id)arg1;
- (BOOL)deliverMessageNotification:(id)arg1;
- (unsigned long long)deliverEventNotifications:(id)arg1;
- (BOOL)scheduleAlarmNotification:(id)arg1;
- (id)init;

@end

