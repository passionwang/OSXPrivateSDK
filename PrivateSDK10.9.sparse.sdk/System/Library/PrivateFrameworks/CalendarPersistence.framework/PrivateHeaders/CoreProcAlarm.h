//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CoreAlarm.h>

@interface CoreProcAlarm : CoreAlarm
{
}

+ (id)humanReadableDescriptionForTrigger:(id)arg1 bookmark:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)alarmWithTrigger:(id)arg1 withAttachment:(id)arg2;
+ (id)alarmWithTrigger:(id)arg1;
- (id)humanReadableDescriptionIsAllDay:(BOOL)arg1;
- (id)humanReadableDescription;
- (id)setDesc:(id)arg1;
- (id)desc;
- (id)setAttachment:(id)arg1;
- (id)attachment;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)arg1 withAttachment:(id)arg2;
- (id)initWithTrigger:(id)arg1;

@end

