//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSArray, NSString;

@interface IMAPQuotaResponse : IMAPResponse
{
    NSString *_quotaRootName;
    NSArray *_quotas;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *quotas; // @synthesize quotas=_quotas;
@property(copy, nonatomic) NSString *quotaRootName; // @synthesize quotaRootName=_quotaRootName;
- (id)description;
- (void)dealloc;

@end

