//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLLocation.h"

@interface CLLocation (VKCLLocationExtras)
- (BOOL)hasMatch;
- (double)speedAccuracy;
- (double)courseAccuracy;
- (double)_vectorkit_rawCourse;
- (CDStruct_c3b9c2ee)_vectorkit_rawCoordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 rawCoordinate:(CDStruct_c3b9c2ee)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12;
@end

