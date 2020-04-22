#import <UIKit/UIKit.h>
#import <PBFrameworkUIStreamDetails/OptInButton.h>

@protocol HostContributionOptInDelegate <NSObject>
-(void) hasOptedInUpcoming:(BOOL)manual;
-(void) hasOptedInActive:(BOOL)manual;
@end

@interface HostContributorOptInView : UIView <OptInButtonDelegate> {
    
}

@property (nonatomic) IBOutlet UIButton *btnAuto;
@property (nonatomic) IBOutlet UIButton *btnManual;
@property (nonatomic) IBOutlet UIButton *btnConfirm;
@property (nonatomic) IBOutlet UIView *vAuto;
@property (nonatomic) IBOutlet UIView *vManual;

@property (nonatomic) IBOutlet UIView *vNavigation;
@property (nonatomic) IBOutlet UIView *vSafeArea;
@property (nonatomic) IBOutlet UIView *vContentView;
@property (nonatomic) IBOutlet UILabel *lblNavTitle;
@property (weak, nonatomic) IBOutlet UILabel *mainTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subtitleLabel;


-(IBAction)pressConfirm:(id)sender;
-(IBAction)pressManual:(id)sender;
-(IBAction)pressAuto:(id)sender;

@property (nonatomic) BOOL isManual;
@property (nonatomic) BOOL isUpcoming;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;

@property (nonatomic) OptInButton *oibAuto;
@property (nonatomic) OptInButton *oibManual;

@property (nonatomic, weak) id<HostContributionOptInDelegate> delegate;

@end
