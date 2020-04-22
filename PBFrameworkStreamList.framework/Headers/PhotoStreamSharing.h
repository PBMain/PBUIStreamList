#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <PBFrameworkUIStreamDetails/ContactViewController.h>

@interface PhotoStreamSharing : UIViewController <ContactViewControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate> {
    IBOutlet UIImageView *imgConfetti;
}

@property (retain,nonatomic) NSString *magicAlbumId;
@property (retain,nonatomic) NSString *magicAlbumName;

@property (retain,nonatomic) IBOutlet UIImageView *imgBlurb;
@property (retain,nonatomic) IBOutlet UIImageView *imgCircles;
@property (retain,nonatomic) IBOutlet UIImageView *imgPerson;
@property (retain,nonatomic) IBOutlet UIImageView *imgButler;
@property (retain,nonatomic) IBOutlet UIImageView *imgLightbulb;
@property (retain,nonatomic) IBOutlet UIImageView *imgEmail;
@property (retain,nonatomic) IBOutlet UIImageView *imgPhone;

@property (retain,nonatomic) IBOutlet UIButton *btnEmail;
@property (retain,nonatomic) IBOutlet UIButton *btnPhone;

@property (retain,nonatomic) IBOutlet UIView *vEmail;
@property (retain,nonatomic) IBOutlet UIView *vPhone;

@property (retain,nonatomic) NSArray *arrSelected;
@property (nonatomic) bool isEmailM;

-(IBAction)pressSkip:(id)sender;
-(IBAction)pressPhone:(id)sender;
-(IBAction)pressEmail:(id)sender;

@end
