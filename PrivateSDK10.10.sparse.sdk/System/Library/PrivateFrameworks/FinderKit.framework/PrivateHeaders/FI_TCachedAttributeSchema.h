/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface FI_TCachedAttributeSchema : NSObject
{
    NSString *_attributeName;
    NSString *_localizedAttributeName;
    NSString *_localizedAttributeDescription;
    unsigned long long _dataType;
    _Bool _inMenu;
}

@property _Bool inMenu; // @synthesize inMenu=_inMenu;
@property unsigned long long dataType; // @synthesize dataType=_dataType;
@property(retain) NSString *localizedAttributeDescription; // @synthesize localizedAttributeDescription=_localizedAttributeDescription;
@property(retain) NSString *localizedAttributeName; // @synthesize localizedAttributeName=_localizedAttributeName;
@property(retain) NSString *attributeName; // @synthesize attributeName=_attributeName;
- (void)dealloc;
- (id)initWithAttributeName:(id)arg1;

@end

