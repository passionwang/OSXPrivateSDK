/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSData, NSFileWrapper, NSImage, NSString, NSTextAttachmentView;

@interface NSTextAttachment : NSObject <NSCoding>
{
    NSFileWrapper *_fileWrapper;
    id <NSTextAttachmentCell> _cell;
    struct {
        unsigned int cellWasExplicitlySet:1;
        unsigned int ignoresOrientation:1;
        unsigned int allowsEditingContents:1;
        unsigned int :29;
    } _flags;
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect _bounds;
    NSImage *_image;
    NSTextAttachmentView *_wrapperView;
}

+ (id)imageCache;
+ (void)initialize;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_uti;
@property(copy, nonatomic) NSData *contents; // @synthesize contents=_data;
- (id)description;
- (id)_textAttachmentCell;
@property(retain) id <NSTextAttachmentCell> attachmentCell;
- (BOOL)ignoresOrientation;
- (void)setIgnoresOrientation:(BOOL)arg1;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)drawingBounds;
- (void)setDrawingBounds:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSFileWrapper *fileWrapper;
- (void)dealloc;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)_image;
- (id)_cacheKey;

@end

