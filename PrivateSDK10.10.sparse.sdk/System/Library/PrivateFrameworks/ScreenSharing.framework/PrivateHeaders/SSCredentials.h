/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SSCredentials : NSObject
{
    NSString *mAuthenticationType;
    void *mReservedForInstanceVariables;
}

+ (id)noAuthenticationNeededCredentials;
@property(readonly) NSString *authenticationType; // @synthesize authenticationType=mAuthenticationType;
- (id)initWithAuthenticationType:(id)arg1;

@end

