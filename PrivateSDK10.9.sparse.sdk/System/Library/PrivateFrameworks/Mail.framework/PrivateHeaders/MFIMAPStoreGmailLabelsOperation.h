//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFIMAPStoreOperation.h>

@class NSArray;

@interface MFIMAPStoreGmailLabelsOperation : MFIMAPStoreOperation
{
}

- (id)description;
@property(readonly, nonatomic) NSArray *gmailLabelsToClear;
@property(readonly, nonatomic) NSArray *gmailLabelsToSet;
- (unsigned char)operationType;
- (id)initWithGmailLabelsToSet:(id)arg1 gmailLabelsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;

@end

