/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IAApplication, NSButton, NSImage, NSImageView, NSString, NSTextField, NSView;

@interface IAAppCheckboxMatrixRowItem : NSObject
{
    NSView *_view;
    NSImageView *_imageView;
    NSButton *_checkbox;
    NSTextField *_textField;
    IAApplication *_app;
    id _delegate;
    NSImage *_image;
    NSString *_title;
}

+ (id)itemWithTitle:(id)arg1 image:(id)arg2;
@property(retain) IAApplication *app; // @synthesize app=_app;
@property(retain) id <IAAppCheckboxMatrixRowItemDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(retain) NSTextField *textField; // @synthesize textField=_textField;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain) NSButton *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;
- (void)checkbox:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)syncUI;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end

