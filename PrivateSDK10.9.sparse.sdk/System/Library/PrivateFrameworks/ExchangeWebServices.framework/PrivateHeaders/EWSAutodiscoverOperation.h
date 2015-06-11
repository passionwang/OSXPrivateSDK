//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class EWSAutodiscoverBinding, EWSAutodiscoverRequest, EWSAutodiscoverResponse, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSPort, NSString, NSURL, NSURLConnection;

@interface EWSAutodiscoverOperation : NSObject <NSURLConnectionDelegate>
{
    EWSAutodiscoverRequest *_request;
    EWSAutodiscoverResponse *_response;
    EWSAutodiscoverBinding *_binding;
    NSString *_user;
    NSString *_password;
    NSError *_error;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_rawResponse;
    NSPort *_cancelPort;
    NSMutableData *_buffer;
    NSString *_host;
    NSString *_emailAddress;
    NSMutableArray *_activeDirectoryRecords;
    NSMutableArray *_srvRecords;
    NSURL *_autodiscoverURLUsed;
    BOOL _autodiscoverState;
    BOOL _isAsynchronous;
    BOOL _inProgress;
    BOOL _triedKerberosAuthentication;
    BOOL _triedPasswordAuthentication;
    BOOL _logsActivity;
}

+ (void)initialize;
@property(retain, nonatomic) NSURL *autodiscoverURLUsed; // @synthesize autodiscoverURLUsed=_autodiscoverURLUsed;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
- (void)_didFinishWithResponse:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (BOOL)_retryConnectionWithURLRequest:(id)arg1;
- (id)_nextRequest;
- (id)_nextURL;
- (void)_clearInProgress;
- (void)_setConnection:(id)arg1;
- (id)_URLRequestWithURL:(id)arg1 isPost:(BOOL)arg2;
- (id)_autodiscoverURLWithScheme:(id)arg1 user:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5;
- (id)_XMLRequest;
- (id)_responseFromXML:(id)arg1 isRedirect:(char *)arg2 error:(id *)arg3;
- (void)cancel;
- (void)start;
- (id)sendSynchronously:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1 binding:(id)arg2;

@end

