/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSearchField.h"

// Not exported
@interface SidebarSearchField : NSSearchField
{
    id <SidebarSearchFieldDelegate> _sidebarSearchFieldDelegate;
    id _accessibilityOverrideParent;
}

+ (void)initialize;
@property(nonatomic) __weak id accessibilityOverrideParent; // @synthesize accessibilityOverrideParent=_accessibilityOverrideParent;
@property(nonatomic) __weak id <SidebarSearchFieldDelegate> sidebarSearchFieldDelegate; // @synthesize sidebarSearchFieldDelegate=_sidebarSearchFieldDelegate;
- (void).cxx_destruct;
- (void)_sidebarSearchFieldInit;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

