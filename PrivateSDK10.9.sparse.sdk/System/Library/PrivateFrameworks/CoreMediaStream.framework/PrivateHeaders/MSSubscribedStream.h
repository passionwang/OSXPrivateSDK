//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding>
{
    NSString *_streamID;
    NSString *_ctag;
}

+ (id)subscribedStreamWithStreamID:(id)arg1;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStreamID:(id)arg1;

@end

