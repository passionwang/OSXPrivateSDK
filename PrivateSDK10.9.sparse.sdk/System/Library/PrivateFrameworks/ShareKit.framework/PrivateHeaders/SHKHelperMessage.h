//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SHKHelperMessage : NSObject
{
    void *_message;
}

+ (id)messageWithXPCMessage:(void *)arg1;
+ (id)messageWithType:(id)arg1;
- (id)description;
- (BOOL)sendReply:(id)arg1;
- (BOOL)sendOnConnection:(struct _xpc_connection_s *)arg1 async:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)sendOnConnection:(struct _xpc_connection_s *)arg1 reply:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void *)_cfObjectForKey:(id)arg1 type:(struct _xpc_type_s *)arg2;
- (void)_setCFObject:(void *)arg1 forKey:(id)arg2;
- (struct CGRect)rectForKey:(id)arg1;
- (void)setRect:(struct CGRect)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (unsigned int)int32ForKey:(id)arg1;
- (void)setInt32:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)copyMachPortForKey:(id)arg1;
- (void)setMachPort:(unsigned int)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
@property(readonly) struct _xpc_connection_s *xpcConnection;
@property(readonly) BOOL needsReply;
@property(copy) NSString *type;
- (void)dealloc;
- (id)initWithMessage:(void *)arg1;
- (id)init;

@end

