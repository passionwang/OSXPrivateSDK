/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SPCExpression;

@interface _SPCVariableInternal : NSObject
{
    BOOL _readOnly;
    SPCExpression *_expression;
}

@property(nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) SPCExpression *expression; // @synthesize expression=_expression;
- (void)dealloc;
- (id)initWithExpression:(id)arg1;

@end

