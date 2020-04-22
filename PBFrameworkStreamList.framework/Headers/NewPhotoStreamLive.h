#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/InviteCodeMenu.h>
#import <PBFrameworkUIStreamDetails/ContactViewController.h>

@interface NewPhotoStreamLive : UIViewController <ContactViewControllerDelegate, InviteCodeMenuDelegate> {
    IBOutlet UIImageView *imgCircleImage;
    IBOutlet UIImageView *imgUserImage;
    
    IBOutlet UIButton *btnInviteSMSEmail;
    IBOutlet UIButton *btnSkipForNow;
    IBOutlet UIView *viewForSwitch;
    
    // Vanity Code
    IBOutlet UIView *viewOrContainer;
    IBOutlet UIView *viewOrGradientLeft;
    IBOutlet UIView *viewOrGradientRight;
    IBOutlet UIView *viewSafeArea;
    CAGradientLayer *gradientLeft;
    CAGradientLayer *gradientRight;
    UIAlertAction *saveAction;
}
@property (assign,nonatomic) BOOL isCollaboration;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *regCode;
@property (nonatomic) NSString *goBackText;
@property (nonatomic, strong) NSString *vanityCodeNew;

@property (nonatomic) BOOL isStream;
@property (nonatomic) BOOL isUpcoming;

@property (nonatomic, retain) IBOutletCollection(UIView) NSArray *viewsAssociatedWithInviteCodes;
@property (weak, nonatomic) IBOutlet UIButton *btnInviteCode;
@property (weak, nonatomic) IBOutlet UIButton *btnCustomizeInviteCode;



@end
