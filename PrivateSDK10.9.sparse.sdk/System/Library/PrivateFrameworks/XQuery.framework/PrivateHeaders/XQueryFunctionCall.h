//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior.h"

@class NSString, NSValue, XQueryArgs, XQueryFunctionDecl;

__attribute__((visibility("hidden")))
@interface XQueryFunctionCall : XQueryExpr <XQueryExprBehavior>
{
    NSString *_name;
    XQueryArgs *_args;
    NSValue *_function;
    XQueryFunctionDecl *_functionDecl;
}

+ (id)functionCallWithName:(id)arg1 withArgs:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithName:(id)arg1 args:(id)arg2;
- (void)finalize;
- (void)dealloc;

@end

