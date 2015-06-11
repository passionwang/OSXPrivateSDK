/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AEElement : NSObject
{
    BOOL _readOnly;
    BOOL _writeOnly;
    unsigned int _code;
    NSString *_name;
    NSString *_singularName;
    NSString *_displayName;
}

+ (id)elementWithName:(id)arg1 singularName:(id)arg2 displayName:(id)arg3 code:(unsigned int)arg4 readOnly:(BOOL)arg5 writeOnly:(BOOL)arg6;
@property BOOL writeOnly; // @synthesize writeOnly=_writeOnly;
@property BOOL readOnly; // @synthesize readOnly=_readOnly;
@property unsigned int code; // @synthesize code=_code;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *singularName; // @synthesize singularName=_singularName;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 singularName:(id)arg2 displayName:(id)arg3 code:(unsigned int)arg4 readOnly:(BOOL)arg5 writeOnly:(BOOL)arg6;

@end

