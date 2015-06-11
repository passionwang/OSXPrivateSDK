//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TTaskErrorViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TTaskErrorOrConflictViewController : FI_TTaskErrorViewController
{
    unsigned int _leftResolution;
    unsigned int _middleResolution;
    unsigned int _rightResolution;
    BOOL _optionKeyDown;
}

@property(nonatomic) BOOL optionKeyDown; // @synthesize optionKeyDown=_optionKeyDown;
- (void)buttonHit:(unsigned int)arg1;
- (void)rightButtonPressed:(id)arg1;
- (void)middleButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (BOOL)allowDefaultKeys;
- (void)setResolutionsForKind:(int)arg1;
- (void)setCanSkip:(BOOL)arg1;
- (BOOL)resolutionAppliesToAll;
- (void)dealloc;
- (id)initWithKind:(int)arg1;
- (void)flagsDidChange:(id)arg1;

@end

