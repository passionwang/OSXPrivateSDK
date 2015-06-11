/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PRSColumnSection : NSObject <NSCoding, NSSecureCoding>
{
    BOOL _text_nowrap;
    int _text_weight;
    NSArray *_text_lines;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL text_nowrap; // @synthesize text_nowrap=_text_nowrap;
@property(nonatomic) int text_weight; // @synthesize text_weight=_text_weight;
@property(retain, nonatomic) NSArray *text_lines; // @synthesize text_lines=_text_lines;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

