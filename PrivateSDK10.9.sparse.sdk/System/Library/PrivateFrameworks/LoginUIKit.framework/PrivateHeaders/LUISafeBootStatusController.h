//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@class LUITextField;

@interface LUISafeBootStatusController : LUIController
{
    LUITextField *_safeBootTextField;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)_setupContentView;
- (BOOL)_isSafeBoot;
- (id)_attributedStringFromString:(id)arg1;

@end

