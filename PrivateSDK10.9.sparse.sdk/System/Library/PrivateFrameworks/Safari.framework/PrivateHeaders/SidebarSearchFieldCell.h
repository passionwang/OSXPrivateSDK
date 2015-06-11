//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSearchFieldCell.h"

__attribute__((visibility("hidden")))
@interface SidebarSearchFieldCell : NSSearchFieldCell
{
    id _accessibilityOverrideParent;
}

@property(nonatomic) id accessibilityOverrideParent; // @synthesize accessibilityOverrideParent=_accessibilityOverrideParent;
- (void)_drawTiledImagesInRect:(struct CGRect)arg1;
- (void)_drawBezeledBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 includeFocus:(BOOL)arg3;
- (struct CGRect)cancelButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)searchTextRectForBounds:(struct CGRect)arg1;
- (void)resetCancelButtonCell;
- (void)resetSearchButtonCell;
- (void)setPlaceholderString:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

