//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "TNWOperationDelegateProtocol.h"

@class FIAirDropView, FIMeetingRoomListViewController, FI_TButton, FI_TTextField, NSArray, NSImage;

__attribute__((visibility("hidden")))
@interface FIAirDropViewGutsController : FI_TViewController <TNWOperationDelegateProtocol>
{
    id <FIAirDropViewDelegate> _delegate;
    struct TNSRef<NSArray *> _urlsToSend;
    struct TNSRef<NSImage *> _largeThumbnail;
    struct TNSRef<NSImage *> _smallThumbnail;
    FIMeetingRoomListViewController *_listViewController;
    FI_TTextField *_explanationTextFld;
    FI_TButton *_okButton;
    FI_TButton *_cancelButton;
    struct TNSRef<FI_TLayoutBinder *> _cancelButtonLayoutBinder;
    struct TNSRef<id<FI_TAirDropNotAvailableDelegateProtocol>> _airDropNotAvailableDelegate;
    struct TString _initialOKBttnTitle;
    struct TRecursiveMutex _senderOpControllerLock;
    struct TMeetingRoomSenderOperationController *_senderOpController;
    BOOL _isReadyToSend;
    unsigned long long _delegateRespondsToMask;
}

+ (void)initialize;
@property(readonly, nonatomic) BOOL isReadyToSend; // @synthesize isReadyToSend=_isReadyToSend;
@property(nonatomic) id <FIAirDropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)nwOperationEventFinished:(id)arg1;
- (void)nwOperationEventErrorOccurred:(id)arg1;
- (void)nwOperationEventCanceled:(id)arg1;
- (void)nwOperationEventProgress:(id)arg1;
- (void)nwOperationEventStarted:(id)arg1;
- (void)nwOperationEventAskUser:(id)arg1;
- (void)tellDelegateCancelButtonPressed;
- (void)tellDelegateOKButtonPressed;
- (void)tellDelegateOperationFinished;
- (void)tellDelegateOperationFailed:(id)arg1;
- (void)tellDelegateOperationCanceled;
- (void)tellDelegateOperationProgress:(id)arg1;
- (void)tellDelegateOperationStarted;
- (void)tellDelegateOperationWaitingForResponse;
- (void)cancelButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)cancelOperation;
- (void)resumeOperation;
- (void)readyToSendStatusMayHaveChanged;
- (void)updateOKButtonTitle;
- (void)updateExplanationText;
- (void)addShadowToExplanationTextFld;
- (void)cancel;
- (void)send;
@property(readonly, nonatomic) NSArray *recipientNames; // @dynamic recipientNames;
- (void)configureForAirDropAvailability;
- (void)airDropAvailabilityChanged:(id)arg1;
- (BOOL)isAirDropAvailable;
@property(readonly, nonatomic) BOOL hideExplanationTextFld; // @dynamic hideExplanationTextFld;
@property(readonly, nonatomic) BOOL enableOKButton; // @dynamic enableOKButton;
@property(readonly, nonatomic) BOOL isSending; // @dynamic isSending;
- (void)setIsReadyToSend:(BOOL)arg1;
@property(readonly, nonatomic) FIAirDropView *airDropView; // @dynamic airDropView;
@property(copy, nonatomic) NSImage *smallThumbnail; // @dynamic smallThumbnail;
@property(copy, nonatomic) NSImage *largeThumbnail; // @dynamic largeThumbnail;
@property(copy, nonatomic) NSArray *urlsToSend; // @dynamic urlsToSend;
- (void)viewLoaded;
- (id)nibName;
- (void)finalize;
- (void)dealloc;
- (void)deallocCommon;
- (void)initCommon;

@end

