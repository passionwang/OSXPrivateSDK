/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSColor, NSFont;

@interface CalUILocationFieldOptions : NSObject
{
    BOOL _shouldDisplaySubtextField;
    BOOL _shouldDisplayControlBackground;
    BOOL _shouldDisplayLocationIcon;
    BOOL _shouldDrawControlBorder;
    BOOL _shouldDrawControlBezel;
    BOOL _shouldDisplayLocationDistances;
    BOOL _includeLocalSearchResults;
    BOOL _includeCurrentLocation;
    BOOL _includeHomeWork;
    BOOL _enableAutomaticLinkDetection;
    NSFont *_controlFont;
    NSColor *_textColor;
    NSColor *_linkColor;
    NSAttributedString *_placeholderAttributedString;
}

@property(retain) NSAttributedString *placeholderAttributedString; // @synthesize placeholderAttributedString=_placeholderAttributedString;
@property(retain) NSColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain) NSFont *controlFont; // @synthesize controlFont=_controlFont;
@property BOOL enableAutomaticLinkDetection; // @synthesize enableAutomaticLinkDetection=_enableAutomaticLinkDetection;
@property BOOL includeHomeWork; // @synthesize includeHomeWork=_includeHomeWork;
@property BOOL includeCurrentLocation; // @synthesize includeCurrentLocation=_includeCurrentLocation;
@property BOOL includeLocalSearchResults; // @synthesize includeLocalSearchResults=_includeLocalSearchResults;
@property BOOL shouldDisplayLocationDistances; // @synthesize shouldDisplayLocationDistances=_shouldDisplayLocationDistances;
@property BOOL shouldDrawControlBezel; // @synthesize shouldDrawControlBezel=_shouldDrawControlBezel;
@property BOOL shouldDrawControlBorder; // @synthesize shouldDrawControlBorder=_shouldDrawControlBorder;
@property BOOL shouldDisplayLocationIcon; // @synthesize shouldDisplayLocationIcon=_shouldDisplayLocationIcon;
@property BOOL shouldDisplayControlBackground; // @synthesize shouldDisplayControlBackground=_shouldDisplayControlBackground;
@property BOOL shouldDisplaySubtextField; // @synthesize shouldDisplaySubtextField=_shouldDisplaySubtextField;
- (void).cxx_destruct;

@end

