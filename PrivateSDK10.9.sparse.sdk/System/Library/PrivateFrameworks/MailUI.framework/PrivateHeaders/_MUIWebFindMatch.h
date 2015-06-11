//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextFinderAsynchronousDocumentFindMatch.h"

@class MUIWebFindController, NSArray, NSView;

@interface _MUIWebFindMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    int _matchIndex;
    NSView *_containingView;
    NSArray *_textRects;
    MUIWebFindController *_findController;
}

@property(nonatomic) int matchIndex; // @synthesize matchIndex=_matchIndex;
@property(nonatomic) MUIWebFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) NSArray *textRects; // @synthesize textRects=_textRects;
@property(retain, nonatomic) NSView *containingView; // @synthesize containingView=_containingView;
- (void)generateTextImage:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

