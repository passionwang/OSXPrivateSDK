//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFDCustomizationItem, IFDTarget, IFDocument, IFSearchContext, NSDictionary, NSMutableDictionary, NSString, PKDistributionChoiceItem, PKDistributionController;

@interface IFJS_IFDContext : NSObject
{
    PKDistributionController *distributionController;
    PKDistributionChoiceItem *choiceItem;
    NSMutableDictionary *result;
    NSString *destinationPath;
    BOOL allowInsecure;
    NSDictionary *systemVersionToBeInstalled;
    IFDCustomizationItem *currentChoice;
    id choicesDelegate;
    IFDTarget *target;
    BOOL targetContentIgnored;
    IFDocument *document;
    struct __CFBundle *currentBundle;
    NSString *distributionScriptsPath;
    IFSearchContext *searchContext;
}

@property IFSearchContext *searchContext; // @synthesize searchContext;
@property(retain) NSString *distributionScriptsPath; // @synthesize distributionScriptsPath;
@property IFDocument *document; // @synthesize document;
@property BOOL targetContentIgnored; // @synthesize targetContentIgnored;
@property IFDTarget *target; // @synthesize target;
@property id choicesDelegate; // @synthesize choicesDelegate;
@property IFDCustomizationItem *currentChoice; // @synthesize currentChoice;
@property(retain) NSDictionary *systemVersionToBeInstalled; // @synthesize systemVersionToBeInstalled;
@property BOOL allowInsecure; // @synthesize allowInsecure;
@property(retain) NSString *destinationPath; // @synthesize destinationPath;
@property(retain) NSMutableDictionary *result; // @synthesize result;
@property PKDistributionChoiceItem *choiceItem; // @synthesize choiceItem;
@property PKDistributionController *distributionController; // @synthesize distributionController;
@property struct __CFBundle *currentBundle;
- (void)dealloc;

@end

