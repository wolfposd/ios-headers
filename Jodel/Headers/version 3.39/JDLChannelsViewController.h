//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLBaseTabViewController.h"

#import "JDLScrollableContentProtocol.h"
#import "UITextFieldDelegate.h"

@class JDLChannelSearchViewModel, JDLChannelsTableDataSource, JDLChannelsViewModel, JDLMoreChannelsTableController, NSLayoutConstraint, NSString, RACDisposable, UIButton, UILabel, UITableView, UITapGestureRecognizer, UITextField, UIView;

@interface JDLChannelsViewController : JDLBaseTabViewController <UITextFieldDelegate, JDLScrollableContentProtocol>
{
    _Bool _shouldShowKeyboard;
    _Bool _isSearching;
    UITableView *_tableView;
    UIView *_footerView;
    UILabel *_footerLabel;
    UILabel *_channelsTitle;
    UITextField *_searchTextField;
    UIView *_searchView;
    UIView *_tableViewOverlay;
    UIView *_bannerView;
    NSLayoutConstraint *_searchTopConstraint;
    UIButton *_startSearchButton;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_searchTapRecognizer;
    UITapGestureRecognizer *_bannerTapRecognizer;
    JDLChannelsViewModel *_viewModel;
    JDLChannelSearchViewModel *_searchViewModel;
    JDLChannelsTableDataSource *_tableDataSource;
    RACDisposable *_currentSubscription;
    JDLMoreChannelsTableController *_moreChannelsController;
}

@property(retain, nonatomic) JDLMoreChannelsTableController *moreChannelsController; // @synthesize moreChannelsController=_moreChannelsController;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) _Bool shouldShowKeyboard; // @synthesize shouldShowKeyboard=_shouldShowKeyboard;
@property(retain, nonatomic) RACDisposable *currentSubscription; // @synthesize currentSubscription=_currentSubscription;
@property(retain, nonatomic) JDLChannelsTableDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) JDLChannelSearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) JDLChannelsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITapGestureRecognizer *bannerTapRecognizer; // @synthesize bannerTapRecognizer=_bannerTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *searchTapRecognizer; // @synthesize searchTapRecognizer=_searchTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) __weak UIButton *startSearchButton; // @synthesize startSearchButton=_startSearchButton;
@property(nonatomic) __weak NSLayoutConstraint *searchTopConstraint; // @synthesize searchTopConstraint=_searchTopConstraint;
@property(nonatomic) __weak UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *tableViewOverlay; // @synthesize tableViewOverlay=_tableViewOverlay;
@property(nonatomic) __weak UIView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) __weak UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak UILabel *channelsTitle; // @synthesize channelsTitle=_channelsTitle;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)searchTextChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didTapFinishSearching:(id)arg1;
- (void)didTapSearchView;
- (void)didTapView;
- (void)animateLayoutChangesInSearchView;
- (void)finishSearching;
- (void)startedTypingInSearch;
- (void)startedSearching;
- (void)hideOverlay;
- (void)showOverlay;
- (void)openMoreChannels;
- (id)karmaTitleLabelColor;
- (void)setupOverlay;
- (void)toggleSearch;
- (void)setupGestureRecognizers;
- (void)setupTextFieldWithPlaceholderText:(id)arg1;
- (void)setupTitle;
- (void)animateFooterLabel;
- (void)refreshTable;
- (void)refreshChannels;
- (void)changeDataSource:(id)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)initViewModels;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

