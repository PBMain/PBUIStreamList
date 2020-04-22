#import <UIKit/UIKit.h>
#import "UIButton_GreenButton.h"

@interface RegisterViewController : UIViewController <UITextFieldDelegate>


@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (nonatomic) IBOutlet UIButton *buttonContinue;
@property (nonatomic) IBOutlet NSLayoutConstraint *viewFieldBackgroundHeight;
@property (nonatomic) IBOutlet UITextField *fieldPhone;
@property (nonatomic) IBOutlet UITextField *fieldEmail;

@property (nonatomic) IBOutlet UIView *viewDivider;
@property (strong, nonatomic) IBOutlet UIView *viewForNormalUser;
@property (strong, nonatomic) IBOutlet UILabel *lblInst1;

@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;

@property (nonatomic) NSTimer *retryTimer;

-(IBAction)pressContinue:(id)sender;

@property (nonatomic) IBOutlet UISwitch *switchTermsAgree;
@property (nonatomic) IBOutlet UILabel *lblTermsLink;
@property (nonatomic) IBOutlet UIView *vTerms;
@property (weak, nonatomic) IBOutlet UIView *viewPoweredByPB;
-(IBAction)pressTerms:(id)sender;

@end
