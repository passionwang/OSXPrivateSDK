//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteRoadInfo : NSObject
{
    NSString *_name;
    NSString *_shieldGroup;
    struct PolylineCoordinate _routeOffset;
}

@property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) NSString *shieldGroup; // @synthesize shieldGroup=_shieldGroup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate)arg3;

@end

