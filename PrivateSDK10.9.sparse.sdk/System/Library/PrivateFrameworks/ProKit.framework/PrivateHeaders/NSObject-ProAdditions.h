//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (ProAdditions)
+ (CDUnknownFunctionPointerType)setImp:(CDUnknownFunctionPointerType)arg1 forSelector:(SEL)arg2 ofClassNamed:(id)arg3 classMethod:(BOOL)arg4;
+ (void)proPoseAsClass:(Class)arg1;
+ (BOOL)isProSubclass;
+ (BOOL)isDefinedInBundleForClass:(Class)arg1;
- (void)_updateProControlSizeForAquaMetrics;
- (void)_updateProControlSizeWithCoder:(id)arg1;
- (BOOL)_lookMetadataIsStoredInDocumentRepresentedByUnarchiver:(id)arg1;
- (void)_storeDeferredProControlSizeInfoFromDecoder:(id)arg1;
- (void)_encodeProControlSizeVersionWithCoder:(id)arg1;
- (CDUnknownFunctionPointerType)setImp:(CDUnknownFunctionPointerType)arg1 forSelector:(SEL)arg2 ofClassNamed:(id)arg3 classMethod:(BOOL)arg4;
- (void)logWithFormat:(id)arg1;
- (void)_logFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)_logString:(id)arg1;
- (id)logId;
- (void)logInvocationOfMethod:(SEL)arg1 withFormat:(id)arg2;
- (void)logInvocationOfMethod:(SEL)arg1;
- (id)invocationForSelector:(SEL)arg1;
- (void)errorWithFormat:(id)arg1;
@end

