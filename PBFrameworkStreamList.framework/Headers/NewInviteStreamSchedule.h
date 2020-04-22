#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/InviteCodeMenu.h>

@interface NewInviteStreamSchedule : UIViewController <InviteCodeMenuDelegate> {
    IBOutlet UIImageView *imgConfetti;
    
    IBOutlet UIButton *btnSkip;
    IBOutlet UIButton *btnInvite;
    IBOutlet UIButton *btnInviteViaCode;
    IBOutlet UIButton *btnQuest;
    
    // Vanity Code
    IBOutlet UIView *viewOrContainer;
    IBOutlet UIView *viewOrGradientLeft;
    IBOutlet UIView *viewOrGradientRight;
    CAGradientLayer *gradientLeft;
    CAGradientLayer *gradientRight;
    UIAlertAction *saveAction;
    InviteCodeMenu *vanityCodeMenu;
    NSString *vanityCodeNew;
}

@property (retain,nonatomic) IBOutlet UILabel *lblDate;
@property (retain,nonatomic) IBOutlet UIView *vSafeArea;
@property (retain,nonatomic) IBOutlet UIButton *btnInviteCode;
@property (retain,nonatomic) IBOutlet UIButton *btnCustomizeInviteCode;
@property (retain,nonatomic) IBOutlet UIImageView *imgScheduleIcon;
@property (retain,nonatomic) IBOutlet UIImageView *imgScheduleBack;

@property (nonatomic, retain) IBOutletCollection(UIView) NSArray *viewsAssociatedWithInviteCodes;

@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *inviteCode;
@property (nonatomic) NSString *dateString;
@property (nonatomic) BOOL isStream;

@end
