/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface TabSearchItem : NSObject
{
    id _representedObject;
    NSString *_title;
}

+ (id)itemWithRepresentedObject:(id)arg1;
+ (id)itemWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;

@end

