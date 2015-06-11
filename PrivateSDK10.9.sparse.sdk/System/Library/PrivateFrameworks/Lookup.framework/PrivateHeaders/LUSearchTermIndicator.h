//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFindIndicator.h"

#import "NSFindIndicatorDelegate.h"

@class NSAttributedString;

@interface LUSearchTermIndicator : NSFindIndicator <NSFindIndicatorDelegate>
{
    NSAttributedString *_searchTerm;
}

+ (id)normalizedString:(id)arg1;
@property(retain) NSAttributedString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void)drawContentsForRect:(struct CGRect)arg1;
- (void)setSearchTerm:(id)arg1 targetView:(id)arg2 targetRect:(struct CGRect)arg3;
- (void)dealloc;
- (id)init;

@end

