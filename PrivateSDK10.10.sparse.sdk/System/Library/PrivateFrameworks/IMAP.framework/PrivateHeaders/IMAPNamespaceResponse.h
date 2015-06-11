/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAP/IMAPResponse.h>

@class NSArray;

@interface IMAPNamespaceResponse : IMAPResponse
{
    NSArray *_privateNamespaces;
    NSArray *_publicNamespaces;
    NSArray *_sharedNamespaces;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *sharedNamespaces; // @synthesize sharedNamespaces=_sharedNamespaces;
@property(copy, nonatomic) NSArray *publicNamespaces; // @synthesize publicNamespaces=_publicNamespaces;
@property(copy, nonatomic) NSArray *privateNamespaces; // @synthesize privateNamespaces=_privateNamespaces;
- (void).cxx_destruct;
- (id)description;

@end

