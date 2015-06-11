/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreFoundation/ISOperation.h>

@class ISDialog, ISDialogButton, ISServerAuthenticationOperation;

@interface ISDialogOperation : ISOperation
{
    ISDialog *_dialog;
    BOOL _performDefaultActions;
    ISDialogButton *_selectedButton;
    id _userNotification;
    ISServerAuthenticationOperation *_authenticationOperation;
    id _buttonClickHandler;
}

+ (id)operationWithDialog:(id)arg1 storeClient:(id)arg2;
@property(copy) id buttonClickHandler; // @synthesize buttonClickHandler=_buttonClickHandler;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property BOOL performDefaultActions; // @synthesize performDefaultActions=_performDefaultActions;
@property(readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)run;
- (void)handleButtonSelected:(long long)arg1;
@property(readonly) ISServerAuthenticationOperation *authenticationOperation; // @dynamic authenticationOperation;
- (id)initWithDialog:(id)arg1 storeClient:(id)arg2;
- (id)init;

@end

