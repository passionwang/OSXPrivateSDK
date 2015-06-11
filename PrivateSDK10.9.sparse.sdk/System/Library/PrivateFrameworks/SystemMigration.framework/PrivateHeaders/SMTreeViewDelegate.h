//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOutlineViewDelegate.h"

@class NSMutableDictionary;

@interface SMTreeViewDelegate : NSObject <NSOutlineViewDelegate>
{
    NSMutableDictionary *_prototypeCellViews;
}

@property(retain) NSMutableDictionary *prototypeCellViews; // @synthesize prototypeCellViews=_prototypeCellViews;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)prototypeViewForIdentifier:(id)arg1 inOutlineView:(id)arg2;
- (id)viewIdentiferAppropirateToItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)dealloc;
- (id)init;

@end

