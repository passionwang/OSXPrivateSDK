//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProButtonCell.h"

@class NSProRenditionKey, NSString;

__attribute__((visibility("hidden")))
@interface BKThemeFacetCell : NSProButtonCell
{
    NSProRenditionKey *_renditionKey;
    NSString *_badge;
    BOOL _parentHighlighted;
    BOOL _rollover;
}

+ (BOOL)prefersTrackingUntilMouseUp;
@property(getter=isRollover) BOOL rollover; // @synthesize rollover=_rollover;
@property(getter=isParentHighlighted) BOOL parentHighlighted; // @synthesize parentHighlighted=_parentHighlighted;
@property(copy) NSString *badge; // @synthesize badge=_badge;
@property(retain) NSProRenditionKey *renditionKey; // @synthesize renditionKey=_renditionKey;
- (struct CGSize)cellSize;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (id)init;

@end

