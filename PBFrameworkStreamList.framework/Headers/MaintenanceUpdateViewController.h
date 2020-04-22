//
//  MaintenanceUpdateViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 2/11/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface MaintenanceUpdateViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *vHeader;
@property (weak, nonatomic) IBOutlet UIImageView *imgCoffeeIcon;
@property (weak, nonatomic) IBOutlet UILabel *lblHeader;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblDescription;
@property (weak, nonatomic) IBOutlet UIButton *btnGoToAppStore;
@property (nonatomic) WKWebView *webview;
@property (nonatomic) NSString *strUrlLink;

// Set description text
-(void) changeDescriptionText:(NSString*)newText;
-(void) changeHeaderBarText:(NSString*)newText;
-(void) changeTitleText:(NSString*)newText;
-(void) changeImage:(UIImage*)newImage;
-(void) changeURLForDisplay:(NSString*)url;

@end
