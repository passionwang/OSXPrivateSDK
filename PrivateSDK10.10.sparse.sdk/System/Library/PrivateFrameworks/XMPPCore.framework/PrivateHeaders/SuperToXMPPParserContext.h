/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMFromSuperParserContext.h"

@class NSMutableString;

@interface SuperToXMPPParserContext : IMFromSuperParserContext
{
    NSMutableString *_outHTML;
    long long _currentFileID;
    BOOL _isForBonjour;
}

- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange)arg3;
- (BOOL)shouldPreprocess;
- (void)parserDidEnd:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (id)resultsForLogging;
- (id)name;
- (BOOL)isForBonjour;
- (id)outHTML;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 isForBonjour:(BOOL)arg2;

@end

