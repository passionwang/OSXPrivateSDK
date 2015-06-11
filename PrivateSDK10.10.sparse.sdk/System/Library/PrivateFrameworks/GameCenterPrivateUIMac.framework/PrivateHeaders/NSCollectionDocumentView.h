/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSUICollectionView;

@interface NSCollectionDocumentView : NSView
{
    NSUICollectionView *_collectionView;
}

@property(nonatomic) __weak NSUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;

@end

