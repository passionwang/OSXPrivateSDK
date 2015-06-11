//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct _DNSServiceRef_t;

struct _SDPInfo {
    char _field1[1024];
    char _field2[1024];
};

struct _VCFocusCapability {
    char audioHardwareCapable;
    int maxAudioParticipantsBasedOnHardware;
    char audioNetworkCapable;
    int maxAudioParticipants;
    char canBeAudioMultipointParticipant;
    char videoHardwareCapable;
    int maxVideoParticipantsBasedOnHardware;
    char videoNetworkCapable;
    int maxVideoParticipants;
    char canBeVideoMultipointParticipant;
    int detectedUpstreamKbits;
    int detectedDownstreamKbits;
};

struct tagCALLBACKDATA {
    int _field1;
    int _field2;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field3;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field4;
    char _field5[80];
    char _field6[1024];
    char _field7[1024];
    int _field8;
    char _field9[80];
    void *_field10;
    int _field11;
};

struct tagHANDLE {
    int _field1;
};

struct tagIPPORT {
    int _field1;
    char _field2[16];
    union {
        unsigned int _field1;
        unsigned char _field2[16];
    } _field3;
    unsigned short _field4;
};

struct tagInternalExternalMapping {
    struct tagIPPORT _field1;
    struct tagIPPORT _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
};

struct tagNetAddrMapInfo {
    struct _DNSServiceRef_t *sdRef;
    unsigned int flags;
    unsigned int interfaceIndex;
    int errorCode;
    unsigned int publicAddress;
    unsigned int protocol;
    unsigned short privatePort;
    unsigned short requestedPublicPort;
    unsigned short publicPort;
    unsigned int ttl;
    int hResult;
    int queryAnswered;
};

struct tagRTPHANDLES {
    struct tagHANDLE *hRTPVideo;
    struct tagHANDLE *hRTPAudio;
};

#pragma mark Typedef'd Structures

typedef struct {
    char *_field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
} CDStruct_79ad071c;

