/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CC_MD2state_st {
    int num;
    unsigned char data[16];
    unsigned int cksm[16];
    unsigned int state[16];
};

struct CC_MD4state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
};

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct CC_SHA512state_st {
    unsigned long long count[2];
    unsigned long long hash[8];
    unsigned long long wbuf[16];
};

struct internal_state;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
} CDStruct_6238c8e0;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    unsigned short _field1;
} CDStruct_f6a177db;

typedef struct {
    int hashType;
    union {
        struct CC_MD5state_st md5;
        struct CC_SHA1state_st sha1;
        struct CC_MD2state_st md2;
        struct CC_MD4state_st md4;
        struct CC_SHA256state_st sha224;
        struct CC_SHA256state_st sha256;
        struct CC_SHA512state_st sha384;
        struct CC_SHA512state_st sha512;
    } context;
} CDStruct_3b890e00;

typedef struct {
    unsigned char _field1[4];
    union {
        struct {
            CDStruct_6238c8e0 _field1;
            CDStruct_69d7cc99 _field2;
            CDStruct_69d7cc99 _field3;
        } _field1;
        struct {
            CDStruct_6238c8e0 _field1;
            CDStruct_6238c8e0 _field2;
            CDStruct_6238c8e0 _field3;
        } _field2;
    } _field2;
} CDStruct_1e765437;

typedef struct {
    unsigned char _field1[4];
    CDStruct_f6a177db _field2;
    CDStruct_f6a177db _field3;
    CDStruct_f6a177db _field4;
    union {
        struct {
            CDStruct_f6a177db _field1;
            CDStruct_f6a177db _field2;
        } _field1;
        CDStruct_6238c8e0 _field2;
    } _field5;
    CDStruct_6238c8e0 _field6;
    CDStruct_6238c8e0 _field7;
    CDStruct_6238c8e0 _field8;
    CDStruct_f6a177db _field9;
    CDStruct_f6a177db _field10;
    unsigned char _field11[0];
} CDStruct_6e051504;

