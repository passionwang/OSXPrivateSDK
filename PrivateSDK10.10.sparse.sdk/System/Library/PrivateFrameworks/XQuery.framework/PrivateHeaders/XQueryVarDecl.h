/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XQueryQName, XQueryTypeDeclaration;

// Not exported
@interface XQueryVarDecl : NSObject
{
    XQueryQName *_name;
    XQueryTypeDeclaration *_type;
    id _expr;
    id _prolog;
}

+ (id)varDecl:(id)arg1 forType:(id)arg2 withExpr:(id)arg3 prolog:(id)arg4;
- (BOOL)isExternal;
- (id)prolog;
- (id)expr;
- (id)type;
- (id)name;
- (id)initWithName:(id)arg1 forType:(id)arg2 withExpr:(id)arg3 prolog:(id)arg4;
- (void)finalize;
- (void)dealloc;

@end

