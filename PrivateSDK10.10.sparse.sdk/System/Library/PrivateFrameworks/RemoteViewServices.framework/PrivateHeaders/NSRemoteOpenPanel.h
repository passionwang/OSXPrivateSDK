/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteViewServices/NSRemoteSavePanel.h>

@class NSArray;

@interface NSRemoteOpenPanel : NSRemoteSavePanel
{
}

+ (id)openPanel;
- (void)setAllowedFileTypes:(id)arg1;
- (void)_setDefaultSettings;
- (unsigned long long)_panelType;

// Remaining properties
@property(retain) NSArray *URLs; // @dynamic URLs;
@property BOOL allowsMultipleSelection; // @dynamic allowsMultipleSelection;
@property BOOL canChooseDirectories; // @dynamic canChooseDirectories;
@property BOOL canChooseFiles; // @dynamic canChooseFiles;
@property BOOL resolvesAliases; // @dynamic resolvesAliases;

@end

