/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSResponder, NSView;

@protocol TKTonePickerContentViewController <NSObject>
@property(readonly, nonatomic) NSResponder *tonePickerResponder;
@property(readonly, nonatomic) NSView *tonePickerContentView;
@property(nonatomic) id <TKTonePickerContentViewControllerDelegate> delegate;
- (id)initWithTonePickerController:(id)arg1;
@end

