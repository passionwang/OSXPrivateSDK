/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary;

// Not exported
@interface TCFontFamily : NSObject
{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (BOOL)fontIsDesignatedBold:(id)arg1;
- (id)variantByRemovingItalicFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByAddingItalicToFont:(id)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (void)dealloc;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;

@end

