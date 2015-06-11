/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class MUIWebDocument, NSArray, NSString, NSURL;

@interface MSEmailModel : NSObject <NSSecureCoding>
{
    NSArray *_toRecipients;
    NSArray *_CCRecipients;
    NSArray *_BCCRecipients;
    NSString *_fromAddress;
    NSString *_subject;
    NSArray *_htmlStringsAndAttachments;
    MUIWebDocument *_webDocument;
    NSURL *_originalReferenceID;
    long long _sendType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long sendType; // @synthesize sendType=_sendType;
@property(retain, nonatomic) NSURL *originalReferenceID; // @synthesize originalReferenceID=_originalReferenceID;
@property(retain, nonatomic) MUIWebDocument *webDocument; // @synthesize webDocument=_webDocument;
@property(copy, nonatomic) NSArray *htmlStringsAndAttachments; // @synthesize htmlStringsAndAttachments=_htmlStringsAndAttachments;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(copy, nonatomic) NSArray *BCCRecipients; // @synthesize BCCRecipients=_BCCRecipients;
@property(copy, nonatomic) NSArray *CCRecipients; // @synthesize CCRecipients=_CCRecipients;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

