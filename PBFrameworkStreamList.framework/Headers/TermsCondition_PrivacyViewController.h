//
//  TermsCondition_PrivacyViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 02/08/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface TermsCondition_PrivacyViewController : UIViewController <WKNavigationDelegate>
{
    IBOutlet UIButton *btnBack;
    
}
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UIView *webViewContainer;
@property (strong, nonatomic) WKWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *indicator;

@property bool isPrivacyPolicy;
@property NSString *anchor;
@property (nonatomic, assign) BOOL dismissSelf;
@end
