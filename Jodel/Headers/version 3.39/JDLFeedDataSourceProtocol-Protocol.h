//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString;

@protocol JDLFeedDataSourceProtocol <NSObject>
- (NSArray *)getAllViewModels;
- (NSIndexPath *)replaceCell:(id <JDLFeedCellViewModelProtocol>)arg1 withNewCell:(id <JDLFeedCellViewModelProtocol>)arg2;
- (NSIndexPath *)indexPathOfCell:(id <JDLFeedCellViewModelProtocol>)arg1;
- (NSIndexPath *)indexPathForCellWithCellId:(NSString *)arg1;
- (id <JDLFeedCellViewModelProtocol>)cellWithCellId:(NSString *)arg1;
- (NSString *)lastCellId;
- (id <JDLFeedCellViewModelProtocol>)cellAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)cellsCountInSection:(long long)arg1;
- (void)removeCellAtIndexPath:(NSIndexPath *)arg1;
@end

