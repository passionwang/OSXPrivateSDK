//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TView.h>

@class FI_TButton, FI_TPopUpButton, FI_TScopeBarRadioGroupView, FI_TTextField;

__attribute__((visibility("hidden")))
@interface FI_TSearchScopeSlice : FI_TView
{
    FI_TTextField *_searchTextView;
    FI_TScopeBarRadioGroupView *_axScopeRadioGroupView;
    FI_TButton *_saveButton;
    FI_TButton *_plusMinusButton;
    struct TNSRef<NSMutableArray *> _scopeButtons;
    FI_TPopUpButton *_scopeDropdown;
    double _scopeDropdownNaturalWidth;
    FI_TButton *_genericRadioButton;
    id <TSearchScopeSliceControllerDelegate> _delegate;
}

@property(nonatomic) id <TSearchScopeSliceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)selectedButtonTitle;
- (id)selectedButton;
- (unsigned long long)selectedButtonIndex;
- (void)setButtonEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (void)selectButtonAtIndex:(unsigned long long)arg1;
- (void)setPlusMinusButtonEnabled:(BOOL)arg1;
- (void)setPlusMinusButtonTitle:(BOOL)arg1;
- (void)setSaveButtonEnabled:(BOOL)arg1;
- (void)setButtonToolTips:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (id)createRadioButtonForTitle:(id)arg1;
- (void)plusMinusButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)scopeDropdownChanged:(id)arg1;
- (void)scopeButtonPressed:(id)arg1;
- (void)chooseScopeButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)minWidth;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)adjustSubviews;
- (double)gapBetweenSearchAndSavePlusBtn:(BOOL)arg1 save:(BOOL)arg2;
- (double)savePlusBtnXOffset:(BOOL)arg1;
- (double)searchTextXOffset:(BOOL)arg1;
- (BOOL)isLTRLayoutDirection;
- (void)dealloc;
- (void)awakeFromNib;

@end

