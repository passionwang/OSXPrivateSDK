/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

// Not exported
@interface OISFUCryptoKey : NSObject
{
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
    NSString *_passphrase;
}

@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
- (id)saltData;
- (unsigned long long)keyLength;
- (const char *)keyData;
- (unsigned int)iterationCount;
- (int)keyType;
- (void)dealloc;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;

@end

