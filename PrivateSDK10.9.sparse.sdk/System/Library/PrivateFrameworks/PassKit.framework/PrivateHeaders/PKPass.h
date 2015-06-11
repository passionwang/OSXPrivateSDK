//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSColor, NSData, NSDate, NSDictionary, NSImage, NSMutableArray, NSString, NSURL;

@interface PKPass : NSObject <NSCoding>
{
    NSURL *_tempFolder;
    NSURL *_manifestFileURL;
    NSURL *_passFileURL;
    NSURL *_signatureFileURL;
    NSURL *_backgroundFileURL;
    NSMutableArray *_headerFields;
    NSMutableArray *_primaryFields;
    NSMutableArray *_secondaryFields;
    NSMutableArray *_auxiliaryFields;
    NSMutableArray *_backFields;
    NSDictionary *_pass;
    BOOL _isVoided;
    BOOL _certificateIsRevoked;
    BOOL _ubiquitous;
    BOOL _ubiquityContainerExists;
    int _barcodeType;
    int _passType;
    int _transitType;
    NSImage *_icon;
    NSImage *_logo;
    NSImage *_background;
    NSImage *_thumbnail;
    NSImage *_footer;
    NSImage *_strip;
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_labelColor;
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSURL *_webServiceURL;
    NSString *_authToken;
    NSString *_teamIdentifier;
    NSArray *_locations;
    NSString *_barcodeMessage;
    NSString *_barcodeEncoding;
    NSString *_barcodeText;
    NSString *_organizationName;
    NSString *_logoText;
    NSDate *_expirationDate;
    NSDate *_passCreatedDate;
    NSDate *_passModifiedDate;
    NSString *_ubiquitousPassHash;
    NSString *_passHash;
    NSString *_filename;
    NSData *_passData;
}

+ (id)passWithPassData:(id)arg1;
+ (id)passWithPassFile:(id)arg1;
+ (BOOL)validatePassWithData:(id)arg1 error:(id *)arg2;
+ (void)validatePassWithData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)placeholderWithPassData:(id)arg1 error:(id *)arg2;
+ (id)passWithPassFile:(id)arg1 error:(id *)arg2;
+ (id)passWithPassData:(id)arg1 error:(id *)arg2;
+ (id)passWithSerializedData:(id)arg1 error:(id *)arg2;
@property(retain) NSData *passData; // @synthesize passData=_passData;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(retain) NSString *passHash; // @synthesize passHash=_passHash;
@property(retain) NSString *ubiquitousPassHash; // @synthesize ubiquitousPassHash=_ubiquitousPassHash;
@property(retain) NSDate *passModifiedDate; // @synthesize passModifiedDate=_passModifiedDate;
@property(retain) NSDate *passCreatedDate; // @synthesize passCreatedDate=_passCreatedDate;
@property BOOL ubiquityContainerExists; // @synthesize ubiquityContainerExists=_ubiquityContainerExists;
@property(nonatomic) BOOL ubiquitous; // @synthesize ubiquitous=_ubiquitous;
@property(retain) NSArray *backFields; // @synthesize backFields=_backFields;
@property(retain) NSArray *auxiliaryFields; // @synthesize auxiliaryFields=_auxiliaryFields;
@property(retain) NSArray *secondaryFields; // @synthesize secondaryFields=_secondaryFields;
@property(retain) NSArray *primaryFields; // @synthesize primaryFields=_primaryFields;
@property(retain) NSArray *headerFields; // @synthesize headerFields=_headerFields;
@property BOOL certificateIsRevoked; // @synthesize certificateIsRevoked=_certificateIsRevoked;
@property BOOL isVoided; // @synthesize isVoided=_isVoided;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property int transitType; // @synthesize transitType=_transitType;
@property int passType; // @synthesize passType=_passType;
@property(retain) NSString *logoText; // @synthesize logoText=_logoText;
@property(retain) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *barcodeText; // @synthesize barcodeText=_barcodeText;
@property(retain) NSString *barcodeEncoding; // @synthesize barcodeEncoding=_barcodeEncoding;
@property int barcodeType; // @synthesize barcodeType=_barcodeType;
@property(retain) NSString *barcodeMessage; // @synthesize barcodeMessage=_barcodeMessage;
@property(retain) NSArray *locations; // @synthesize locations=_locations;
@property(retain) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(retain) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;
@property(retain) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain) NSImage *strip; // @synthesize strip=_strip;
@property(retain) NSImage *footer; // @synthesize footer=_footer;
@property(retain) NSImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain) NSImage *background; // @synthesize background=_background;
@property(retain) NSImage *logo; // @synthesize logo=_logo;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)sharingItemURL;
@property(readonly) BOOL tallBarcode;
- (void)_setUbiquitousWithoutSendingToiCloud:(BOOL)arg1;
@property(readonly) NSString *ubiquitousFilename;
@property(readonly) NSString *passTypeString;
@property(readonly) NSString *windowTitle;
@property(readonly) struct CGSize windowSize; // @dynamic windowSize;
@property(readonly) BOOL isExpiredOrInvalid;
@property(readonly) BOOL isExpired;
- (void)removeObjectFromBackFieldsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inBackFieldsAtIndex:(long long)arg2;
- (void)removeObjectFromAuxiliaryFieldsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAuxiliaryFieldsAtIndex:(long long)arg2;
- (void)removeObjectFromSecondaryFieldsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSecondaryFieldsAtIndex:(long long)arg2;
- (void)removeObjectFromPrimaryFieldsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPrimaryFieldsAtIndex:(long long)arg2;
- (void)removeObjectFromHeaderFieldsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inHeaderFieldsAtIndex:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serializedData;

@end

