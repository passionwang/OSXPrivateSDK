//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CPDumpType.h>

__attribute__((visibility("hidden")))
@interface CPDumpBlob : CPDumpType
{
    unsigned long long mSize;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSize_:(unsigned long long)arg1;

@end

