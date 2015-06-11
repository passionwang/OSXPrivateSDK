//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CalUILocation, CalUILocationDelegate, CalUILocationTextField, CalUILocationTokenField, NSControl, NSImage, NSImageView, NSProgressIndicator;

@interface CalUILocationFieldInstance : NSView
{
    NSImage *_locationIcon;
    CalUILocation *_structuredLocation;
    BOOL _editable;
    BOOL _isConferenceRoomStyle;
    NSControl *_control;
    NSProgressIndicator *_progressIndicator;
    CalUILocationDelegate *_delegate;
    CalUILocationTextField *_textField;
    CalUILocationTokenField *_tokenField;
    NSImageView *_locationIconView;
}

@property(retain) NSImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain) CalUILocationTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain) CalUILocationTextField *textField; // @synthesize textField=_textField;
@property CalUILocationDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property NSControl *control; // @synthesize control=_control;
- (BOOL)_shouldLayoutProgressIndicator;
- (double)_controlWidth;
- (double)_controlAndProgressIndicatorWidth;
- (double)_controlX;
- (void)setIsConferenceRoomStyle:(BOOL)arg1;
- (BOOL)isConferenceRoomStyle;
@property(retain) NSImage *locationIcon;
@property(retain) CalUILocation *structuredLocation;
- (void)setObjectValueWithLocation:(id)arg1 icon:(id)arg2;
@property BOOL editable;
- (void)copyLocation:(id)arg1;
- (void)relayout;
- (void)reset;
- (void)dealloc;
- (id)initWithLocationDelegate:(id)arg1 frame:(struct CGRect)arg2 options:(id)arg3;

@end

