/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IPDigitGroup, NSMutableData;

@interface IPParser : NSObject
{
    unsigned int _q;
    IPDigitGroup *_group;
    NSMutableData *_ipchars;
    unsigned int _formatFlags;
    BOOL _isV6;
    BOOL _hasDoubleColon;
    unsigned int _prefixLen;
    int _error;
}

- (int)setAddressString:(id)arg1;
- (int)validateComplete;
- (int)appendChar:(unsigned short)arg1;
- (int)error;
- (id)addressString;
- (unsigned int)prefixLength;
- (BOOL)isV6;
- (void)setAddressFormat:(unsigned int)arg1;
- (unsigned int)addressFormat;
- (void)reset;
- (void)dealloc;
- (id)initWithAddressString:(id)arg1 format:(unsigned int)arg2;
- (id)init;

@end

