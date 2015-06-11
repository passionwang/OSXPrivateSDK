//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUndoManager;

@interface ACSHPlistObject : NSObject
{
    NSUndoManager *_undoManager;
    NSString *_identifier;
    BOOL _isInitializing;
}

+ (id)createWithDictionary:(id)arg1 undoManager:(id)arg2;
+ (Class)classForDict:(id)arg1;
+ (id)keysForValuesToObserveForView;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (id)dictionaryForSaving;
- (void)dealloc;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)initWithUndoManager:(id)arg1;

@end

