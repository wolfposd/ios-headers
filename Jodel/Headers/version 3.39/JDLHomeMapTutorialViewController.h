//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIImageView, UILabel, UITextView;

@interface JDLHomeMapTutorialViewController : UIViewController
{
    NSString *_imageName;
    NSString *_contentLabelText;
    NSString *_titleLabelText;
    UILabel *_titleLabel;
    UITextView *_contentLabel;
    UIImageView *_imageLabel;
}

@property(nonatomic) __weak UIImageView *imageLabel; // @synthesize imageLabel=_imageLabel;
@property(nonatomic) __weak UITextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
@property(copy, nonatomic) NSString *contentLabelText; // @synthesize contentLabelText=_contentLabelText;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)refreshContentLabel:(id)arg1;
- (void)viewDidLoad;

@end

