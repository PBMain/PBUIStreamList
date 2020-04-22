#import <UIKit/UIKit.h>
#import "UIButton_GreenButton.h"

@interface PermissionsViewController : UIViewController

@property (nonatomic) IBOutlet GreenButton *buttonPermissions;
@property (nonatomic) IBOutlet GreenButton *buttonContinue;
@property (nonatomic) IBOutlet UIImageView *imgPictures;


-(IBAction)pressPermissions:(id)sender;
-(IBAction)pressContinue:(id)sender;
-(IBAction)pressTerms:(id)sender;
-(IBAction)pressPrivacyPolicy:(id)sender;

-(void)showContinueButton;


@end
