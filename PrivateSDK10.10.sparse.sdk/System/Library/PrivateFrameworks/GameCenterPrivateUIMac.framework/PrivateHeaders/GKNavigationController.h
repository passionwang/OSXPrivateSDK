/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UXNavigationController.h"

@class NSMutableArray;

@interface GKNavigationController : UXNavigationController
{
    NSMutableArray *_deferredTransitions;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSMutableArray *deferredTransitions; // @synthesize deferredTransitions=_deferredTransitions;
- (void)dealloc;
- (void)setupGKNavigationController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

@end

