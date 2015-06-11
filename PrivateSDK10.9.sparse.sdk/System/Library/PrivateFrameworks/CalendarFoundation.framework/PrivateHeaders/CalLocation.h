//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CLLocation, CLPlacemark, NSString;

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation *_location;
    NSString *_address;
    NSString *_title;
    NSString *_displayName;
    NSString *_abURLString;
    CLPlacemark *_placemark;
    BOOL _isCurrentLocation;
    double _radius;
    NSString *_routeType;
    int _type;
}

+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy) NSString *routeType; // @synthesize routeType=_routeType;
@property double radius; // @synthesize radius=_radius;
@property int type; // @synthesize type=_type;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(copy) NSString *abURLString; // @synthesize abURLString=_abURLString;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *address; // @synthesize address=_address;
- (id)geoURLString;
- (id)fullTitleAndAddressString;
- (id)displayString;
@property(readonly) BOOL isCurrentLocation;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (id)typeString;
@property(copy) CLLocation *location;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

