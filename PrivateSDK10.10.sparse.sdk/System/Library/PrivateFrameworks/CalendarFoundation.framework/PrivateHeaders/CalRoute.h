/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *route; // @synthesize route=_route;
@property double duration; // @synthesize duration=_duration;
@property(retain) CalLocation *end; // @synthesize end=_end;
@property(retain) CalLocation *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

