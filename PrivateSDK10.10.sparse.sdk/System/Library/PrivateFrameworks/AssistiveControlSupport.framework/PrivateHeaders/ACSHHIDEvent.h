/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ACSHHIDEvent : NSObject
{
    int _type;
    unsigned long long _buttonNumber;
    struct CGPoint _location;
    double _deltaX;
    double _deltaY;
}

@property(nonatomic) double deltaY; // @synthesize deltaY=_deltaY;
@property(nonatomic) double deltaX; // @synthesize deltaX=_deltaX;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) unsigned long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;
@property(nonatomic) int type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

