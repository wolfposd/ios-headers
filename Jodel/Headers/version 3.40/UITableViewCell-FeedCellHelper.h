//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface UITableViewCell (FeedCellHelper)
- (id)tappableAttributes;
- (void)addURLAttributesForString:(id)arg1;
- (void)addChannelsAttributesForString:(id)arg1;
- (void)addHashtagsAttributesForString:(id)arg1;
- (id)formattedAttributedStringForText:(id)arg1 useBoldFont:(_Bool)arg2 shouldShowHashtags:(_Bool)arg3 shouldShowLinks:(_Bool)arg4 shouldShowChannels:(_Bool)arg5;
- (void)animateButtonsPress:(id)arg1;
- (_Bool)shouldRefreshLabelLayout;
@end

