/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_IAsyncNodeOperation.h>

// Not exported
@interface FI_TTagOperation : FI_IAsyncNodeOperation
{
    struct TTagsTask *_task;
    struct TNSRef<FI_TTagOperationDelegate *> _opDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)runOperation;
- (int)cancelOperation;
- (int)startSubOperation:(unsigned int)arg1;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forIndex:(unsigned long long)arg2;
- (id)initWithNodes:(const struct TFENodeVector *)arg1 forTask:(struct TTagsTask *)arg2;

@end

