//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSString;

@interface NSError (FileSyncAdditions)
+ (id)errorMessageFromUnknownError:(long long)arg1;
+ (id)errorMessageFromPOSIXError:(int)arg1;
+ (id)errorMessageFromOSStatus:(int)arg1;
+ (id)errorMessageFromErrorCode:(long long)arg1 domain:(id)arg2;
+ (id)errorMessageFromCocoaError:(long long)arg1;
+ (id)errorMessageFromCFRunLoopRunError:(int)arg1;
@property(readonly, nonatomic) BOOL isTimeoutError;
@property(readonly, nonatomic) BOOL isPermissionsError;
@property(readonly, nonatomic) BOOL isNSVError;
@property(readonly, nonatomic) BOOL isIOError;
@property(readonly, nonatomic) BOOL isHardError;
@property(readonly, nonatomic) BOOL isFileNotFoundError;
@property(readonly, nonatomic) BOOL isFatalCoreDataError;
@property(readonly, nonatomic) BOOL isDiskFullError;
@property(readonly, nonatomic) NSString *errorMessage;
@end

