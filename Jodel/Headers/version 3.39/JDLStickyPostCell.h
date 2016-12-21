//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "JDLFeedCellProtocol.h"

@class JDLStickyPostCellViewModel, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, ZSWTappableLabel;

@interface JDLStickyPostCell : UITableViewCell <JDLFeedCellProtocol>
{
    ZSWTappableLabel *_contentLabel;
    UILabel *_locationLabel;
    UIButton *_downvoteButton;
    UIButton *_upvoteButton;
    UIImageView *_forwardImageView;
    UIView *_containerView;
    UIButton *_closeButton;
    UIView *_votingView;
    NSLayoutConstraint *_votingViewTopConstraint;
    JDLStickyPostCellViewModel *_viewModel;
}

+ (id)cellReuseIdentifier;
+ (id)cellNibName;
@property(retain, nonatomic) JDLStickyPostCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak NSLayoutConstraint *votingViewTopConstraint; // @synthesize votingViewTopConstraint=_votingViewTopConstraint;
@property(nonatomic) __weak UIView *votingView; // @synthesize votingView=_votingView;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *forwardImageView; // @synthesize forwardImageView=_forwardImageView;
@property(nonatomic) __weak UIButton *upvoteButton; // @synthesize upvoteButton=_upvoteButton;
@property(nonatomic) __weak UIButton *downvoteButton; // @synthesize downvoteButton=_downvoteButton;
@property(nonatomic) __weak UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(nonatomic) __weak ZSWTappableLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)tappableLabel:(id)arg1 tappedAtIndex:(long long)arg2 withAttributes:(id)arg3;
- (void)refreshVoteState:(long long)arg1;
- (void)upvote:(_Bool)arg1;
- (_Bool)cellStillHasTheSameCellId:(id)arg1;
- (void)downvoteTap:(id)arg1;
- (void)upvoteTap:(id)arg1;
- (void)closeTap:(id)arg1;
- (void)makeRoundedCornersForView:(id)arg1 corners:(unsigned long long)arg2 radii:(double)arg3;
- (id)attributedTextFromMessage:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

