/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CoreDAVItem <NSObject>
+ (id)parseRuleCache;
+ (id)copyParseRules;
- (void)parserSuggestsBaseURL:(id)arg1;
- (BOOL)validate;
- (void)write:(id)arg1;
- (id)copyParseRules;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;
@end

