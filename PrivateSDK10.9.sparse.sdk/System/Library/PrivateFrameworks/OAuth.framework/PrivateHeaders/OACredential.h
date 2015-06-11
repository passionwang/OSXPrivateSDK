//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OACredential : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property(copy, nonatomic) NSString *oauthTokenSecret; // @synthesize oauthTokenSecret=_oauthTokenSecret;
@property(copy, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (id)signingKey;
- (void)dealloc;

@end

