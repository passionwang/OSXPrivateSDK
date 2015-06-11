/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface OADRotation3D : NSObject <NSCopying>
{
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)revolution;
- (float)longitude;
- (float)latitude;
- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3;

@end

