/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAP/IMAPCompoundDownload.h>

@interface IMAPAttachmentsDownload : IMAPCompoundDownload
{
    id <IMAPMessage> _message;
}

@property(retain) id <IMAPMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)saveCompletedDownloads;
- (id)createCopy;
- (id)initWithIMAPMessage:(id)arg1;

@end

