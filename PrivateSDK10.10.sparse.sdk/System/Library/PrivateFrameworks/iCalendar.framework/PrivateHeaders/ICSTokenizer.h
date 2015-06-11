/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface ICSTokenizer : NSObject
{
    NSData *_data;
    const char *_datastring;
    int _length;
    int _cursor;
    char *_token;
    int _tokenType;
    int _expectedNextTokenType;
    BOOL _printedICS;
    int _logCount;
}

@property int logCount; // @synthesize logCount=_logCount;
@property BOOL printedICS; // @synthesize printedICS=_printedICS;
- (int)tokenType;
- (char *)currentToken;
- (char *)nextToken;
- (void)consumePropValue;
- (void)consumeParamValue;
- (BOOL)consumeEscaped:(const char *)arg1;
- (void)consumeParamName;
- (void)consumePropName;
- (void)consumeWhiteSpace;
- (BOOL)consumeEOL;
- (BOOL)consumeFolding;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

