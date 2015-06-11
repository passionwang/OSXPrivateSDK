//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AuthDBFile : NSObject
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *mFreeListFile;
    unsigned long long mPWFileLen;
    struct PWFileHeader mPWFileHeader;
    unsigned char mPWFileValidated;
    char mPWFilePermission[10];
    struct rsa_st *rsaKey;
    _Bool mGotHeader;
    char *mDirPathStr;
    _Bool mReadOnlyFileSystem;
    unsigned int mKerberosCacheLimit;
    char *mSearchBase;
    long long mPWHdrLastMod;
    struct ldap *mLdap;
    char *mRealm;
}

- (char *)getDefaultRealm;
- (void)setKerberosCacheLimit:(unsigned int)arg1;
- (unsigned int)kerberosCacheLimit;
- (int)saveHistory:(struct PWFileEntry *)arg1 data:(char *)arg2;
- (int)getHistory:(struct PWFileEntry *)arg1 data:(char *)arg2;
- (int)putInHistory:(struct PWFileEntry *)arg1 passwordHash:(const char *)arg2;
- (int)checkHistory:(struct PWFileEntry *)arg1 count:(int)arg2 password:(const char *)arg3;
- (int)reenableStatus:(struct PWFileEntry *)arg1 enableMinutes:(unsigned long long)arg2;
- (int)passwordHistoryStatus:(struct PWFileEntry *)arg1 password:(const char *)arg2;
- (int)requiredCharacterStatus:(struct PWFileEntry *)arg1 forPassword:(const char *)arg2;
- (int)changePasswordStatus:(struct PWFileEntry *)arg1;
- (int)disableStatus:(struct PWFileEntry *)arg1 changed:(char *)arg2 reason:(int *)arg3;
- (void)requireNewPasswordForAllAccounts:(BOOL)arg1;
- (int)shouldTryLDAP;
- (int)getAccountIDFromLDAP:(const char *)arg1 slotID:(char *)arg2;
- (char *)getLDAPSearchBase;
- (int)getUserRecordFromPrincipal:(const char *)arg1 record:(struct PWFileEntry *)arg2;
- (int)getUserIDFromName:(const char *)arg1 anyUser:(BOOL)arg2 maxBuffSize:(long long)arg3 pwsID:(char *)arg4;
- (BOOL)removeKey:(struct __CFString *)arg1 fromAdditionalDataFile:(const char *)arg2;
- (void)setFilePath:(char *)arg1 maxPathSize:(unsigned long long)arg2 forEntry:(struct PWFileEntry *)arg3;
- (BOOL)isOwner:(const char *)arg1 forEntry:(struct PWFileEntry *)arg2;
- (BOOL)removeAllOwnersFromEntry:(struct PWFileEntry *)arg1;
- (BOOL)addOwners:(const char *)arg1 toEntry:(struct PWFileEntry *)arg2;
- (BOOL)removeAllGroupsFromAdmin:(struct PWFileEntry *)arg1;
- (BOOL)removeGroup:(unsigned char [16])arg1 fromAdmin:(struct PWFileEntry *)arg2;
- (BOOL)addGroup:(unsigned char [16])arg1 toAdmin:(struct PWFileEntry *)arg2;
- (void)addHashes:(const char *)arg1 addNT:(BOOL)arg2 pwsRec:(struct PWFileEntry *)arg3;
- (int)setPasswordFast:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2;
- (int)setPassword:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2 obfuscate:(BOOL)arg3 setModDate:(BOOL)arg4;
- (int)setPassword:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2;
- (int)freeSlot:(struct PWFileEntry *)arg1 deathCertificate:(BOOL)arg2;
- (int)freeSlot:(struct PWFileEntry *)arg1;
- (int)getValidPasswordRec:(struct PWFileEntry *)arg1 fromSpillBucket:(char *)arg2 unObfuscate:(BOOL)arg3;
- (int)getValidPasswordRec:(struct PWFileEntry *)arg1;
- (int)getPasswordRec:(unsigned char (*)[16])arg1 putItHere:(struct PWFileEntry *)arg2 unObfuscate:(BOOL)arg3;
- (int)getPasswordRec:(unsigned char (*)[16])arg1 putItHere:(struct PWFileEntry *)arg2;
- (int)newPasswordForUser:(const char *)arg1 password:(const char *)arg2 slotStr:(char *)arg3 slotRec:(struct PWFileEntry *)arg4;
- (int)initPasswordRecord:(struct PWFileEntry *)arg1 obfuscate:(BOOL)arg2;
- (int)addPasswordFast:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2;
- (int)addPassword:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2 obfuscate:(BOOL)arg3 setModDate:(BOOL)arg4;
- (int)addPassword:(struct PWFileEntry *)arg1 atSlot:(unsigned char [16])arg2 obfuscate:(BOOL)arg3;
- (int)addPassword:(struct PWFileEntry *)arg1 obfuscate:(BOOL)arg2;
- (int)addRSAKeys:(char *)arg1 publicKeyLen:(unsigned int)arg2 privateKey:(char *)arg3 privateKeyLen:(unsigned int)arg4;
- (int)addRSAKeys:(unsigned int)arg1;
- (int)addRSAKeys;
- (BOOL)getBigNumber:(char **)arg1;
- (int)expandDatabase:(unsigned int)arg1 nextAvailableSlot:(unsigned char (*)[16])arg2;
- (int)removeWeakAuthMethod:(const char *)arg1;
- (int)addWeakAuthMethod:(const char *)arg1;
- (int)isWeakAuthMethod:(const char *)arg1;
- (int)encryptRSA:(char *)arg1 length:(int)arg2 result:(char *)arg3;
- (int)decryptRSA:(char *)arg1 length:(int)arg2 result:(char *)arg3;
- (int)loadRSAKeys;
- (int)getRSAPublicKey:(char *)arg1;
- (int)setHeader:(const struct PWFileHeader *)arg1;
- (int)getHeader:(struct PWFileHeader *)arg1 cachedCopyOK:(BOOL)arg2;
- (int)getHeader:(struct PWFileHeader *)arg1;
- (void)rsaSignal;
- (void)rsaWait;
- (void)pwSignal;
- (void)pwWait;
- (void)resetPasswordFileState;
- (void)freeRSAKey;
- (int)createPasswordFile;
- (id)free;
- (void)dealloc;
- (id)init;

@end

