//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, _MFRedundantTextIdentifierAttachmentContext;

@interface _MFRedundantTextIdentifierParseContext : NSObject
{
    BOOL _searchInForwardDirection;
    BOOL _startTagCharacter;
    BOOL _endTagCharacter;
    BOOL _startEntityCharacter;
    BOOL _endEntityCharacter;
    BOOL _isParsingEntity;
    BOOL _isParsingAttachment;
    BOOL _attachmentIsTag;
    unsigned short _entityValueCharacter;
    CDStruct_f9502b4c *_buffer;
    unsigned long long _bufferStartIndex;
    unsigned long long _bufferLength;
    long long _currentIndex;
    long long _startMatchIndexForCurrentLine;
    long long _entityStartIndex;
    _MFRedundantTextIdentifierAttachmentContext *_attachmentContext;
    long long _attachmentStartIndex;
    long long _attachmentEndIndex;
    NSDictionary *_attachmentContextsByURL;
}

+ (void)normalizeEntitiesInString:(id)arg1;
+ (id)normalizedStringForEntity:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attachmentContextsByURL; // @synthesize attachmentContextsByURL=_attachmentContextsByURL;
@property(nonatomic) BOOL attachmentIsTag; // @synthesize attachmentIsTag=_attachmentIsTag;
@property(nonatomic) long long attachmentEndIndex; // @synthesize attachmentEndIndex=_attachmentEndIndex;
@property(nonatomic) long long attachmentStartIndex; // @synthesize attachmentStartIndex=_attachmentStartIndex;
@property(retain, nonatomic) _MFRedundantTextIdentifierAttachmentContext *attachmentContext; // @synthesize attachmentContext=_attachmentContext;
@property(nonatomic) BOOL isParsingAttachment; // @synthesize isParsingAttachment=_isParsingAttachment;
@property(nonatomic) long long entityStartIndex; // @synthesize entityStartIndex=_entityStartIndex;
@property(nonatomic) unsigned short entityValueCharacter; // @synthesize entityValueCharacter=_entityValueCharacter;
@property(nonatomic) BOOL isParsingEntity; // @synthesize isParsingEntity=_isParsingEntity;
@property(readonly, nonatomic) BOOL endEntityCharacter; // @synthesize endEntityCharacter=_endEntityCharacter;
@property(readonly, nonatomic) BOOL startEntityCharacter; // @synthesize startEntityCharacter=_startEntityCharacter;
@property(readonly, nonatomic) BOOL endTagCharacter; // @synthesize endTagCharacter=_endTagCharacter;
@property(readonly, nonatomic) BOOL startTagCharacter; // @synthesize startTagCharacter=_startTagCharacter;
@property(nonatomic) BOOL searchInForwardDirection; // @synthesize searchInForwardDirection=_searchInForwardDirection;
@property(nonatomic) long long startMatchIndexForCurrentLine; // @synthesize startMatchIndexForCurrentLine=_startMatchIndexForCurrentLine;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) unsigned long long bufferLength; // @synthesize bufferLength=_bufferLength;
@property(readonly, nonatomic) unsigned long long bufferStartIndex; // @synthesize bufferStartIndex=_bufferStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *buffer; // @synthesize buffer=_buffer;
- (id)parseAndSanitizeAttributionLineInRange:(struct _NSRange *)arg1;
- (void)resetCurrentIndex;
- (long long)advanceToEndOfLine:(char *)arg1;
- (long long)advanceToEndOfLine;
- (BOOL)advanceToEndOfAttachmentPlaceholderIfExists;
- (unsigned short)readAndAdvanceToEndOfEntityIfExists;
- (long long)advancePastNonContentTagsAndWhitespaceParsingAttachmentPlaceholders:(BOOL)arg1;
- (unsigned short)charFromBufferAtIndex:(unsigned long long)arg1;
- (unsigned short)nextCharacterToMatch;
- (unsigned short)currentCharFromBuffer;
- (void)incrementCurrentIndexBy:(unsigned long long)arg1;
- (void)incrementCurrentIndex;
- (BOOL)isBlockLevelTag:(char *)arg1 size:(unsigned long long)arg2;
- (BOOL)advanceToClosingTagMatchingOpenTag:(char *)arg1 openTagSize:(unsigned long long)arg2;
- (BOOL)advanceToEndOfCommentIfExists;
- (BOOL)parseAttachmentFilenameFromAttribute:(const char *)arg1;
- (unsigned long long)readElement:(char *)arg1 isCloseElement:(char *)arg2 shouldParseAttachmentTags:(BOOL)arg3;
- (unsigned long long)readAndAdvanceToEndOfTag:(char *)arg1 isCloseTag:(char *)arg2 shouldParseAttachmentTags:(BOOL)arg3;
- (unsigned long long)remainingCharacters;
- (id)charactersInMessageWithCurrentIndexMarked;
- (id)description;
- (void)dealloc;
- (id)initWithBuffer:(CDStruct_f9502b4c *)arg1 bufferStartIndex:(unsigned long long)arg2 bufferLength:(unsigned long long)arg3 searchInForwardDirection:(BOOL)arg4 attachmentContextsByURL:(id)arg5;

@end

