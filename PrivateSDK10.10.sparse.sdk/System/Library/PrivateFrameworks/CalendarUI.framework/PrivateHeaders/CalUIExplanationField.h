/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/CalUIGadget.h>

@class NSMutableArray, NSTextView;

@interface CalUIExplanationField : CalUIGadget
{
    BOOL _shown;
    NSTextView *_view;
    NSMutableArray *_requestingGadgets;
}

@property(retain) NSMutableArray *requestingGadgets; // @synthesize requestingGadgets=_requestingGadgets;
@property(retain) NSTextView *view; // @synthesize view=_view;
@property BOOL shown; // @synthesize shown=_shown;
- (void).cxx_destruct;
- (void)inspectorDidClose;
- (id)textView;
- (void)sizeToFit;
- (id)init;

@end

