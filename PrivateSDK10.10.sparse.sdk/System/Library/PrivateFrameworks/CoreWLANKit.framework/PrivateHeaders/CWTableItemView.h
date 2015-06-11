/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray, NSString, NSTableView;

@interface CWTableItemView : NSView
{
    NSTableView *_tableView;
    unsigned long long _row;
    NSString *_title;
    NSArray *_images;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)__drawLTRRect:(struct CGRect)arg1;
- (void)__drawRTLRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 images:(id)arg3 row:(unsigned long long)arg4 tableView:(id)arg5;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

