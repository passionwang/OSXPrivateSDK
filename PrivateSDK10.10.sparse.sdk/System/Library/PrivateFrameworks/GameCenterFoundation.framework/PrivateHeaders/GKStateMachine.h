/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GKStateMachine : NSObject
{
    int _lock;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    id <GKStateMachineDelegate> _delegate;
    BOOL _shouldLogStateTransitions;
}

@property id <GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) BOOL shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)_setCurrentState:(id)arg1;
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (BOOL)applyState:(id)arg1;
- (void)dealloc;
- (id)init;

@end

