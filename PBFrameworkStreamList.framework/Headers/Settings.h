//
//  SettingViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 26/07/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingTableViewCell.h"
#import <MessageUI/MessageUI.h>
@interface SettingsViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,MFMailComposeViewControllerDelegate>
{
    IBOutlet UITableView *tblViewForSetting;
    __weak IBOutlet UILabel *lblVersion;
    __weak IBOutlet UILabel *lblUserId;    
}
@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UIView *viewNavigationBar;
@property (weak, nonatomic) IBOutlet UIView *viewSafeArea;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblAppName;
@property (weak, nonatomic) IBOutlet UILabel *lblCopyright;
@property (weak, nonatomic) IBOutlet UIImageView *imgMainIcon;
@property (weak, nonatomic) IBOutlet UIImageView *imgAppLogoIcon;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imgAppLogoIconWidth;

@end
