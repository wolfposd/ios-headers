//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDLNetworkCheckingBaseViewController.h"

#import "WKUIWebViewDelegate.h"

@class JDLLoadingWebView, NSString, NSURL;

@interface JDLWebViewController : JDLNetworkCheckingBaseViewController <WKUIWebViewDelegate>
{
    JDLLoadingWebView *_webView;
    NSURL *_urlToLoad;
    NSString *_viewTitle;
}

@property(copy, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSURL *urlToLoad; // @synthesize urlToLoad=_urlToLoad;
@property(nonatomic) __weak JDLLoadingWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

