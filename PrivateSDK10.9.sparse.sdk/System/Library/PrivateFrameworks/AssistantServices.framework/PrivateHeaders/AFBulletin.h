//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin;

@interface AFBulletin : NSObject
{
    BOOL _read;
    BBBulletin *_bulletin;
}

@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(nonatomic, getter=isRead) BOOL read; // @synthesize read=_read;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

