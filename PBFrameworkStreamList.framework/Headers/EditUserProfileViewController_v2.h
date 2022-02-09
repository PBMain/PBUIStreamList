#import <UIKit/UIKit.h>
#import "SelfieCropperViewController.h"
#import <PBFrameworkUIStreamDetails/CustomStreamCoverMenu.h>


@interface EditUserProfileViewController_v2 : UIViewController <UITextFieldDelegate, CustomStreamCoverMenuDelegate, SelfieCropperEditDelegate>
@property (weak, nonatomic) IBOutlet UILabel *lblFirstName;
@property (weak, nonatomic) IBOutlet UILabel *lblLastName;
@property (strong, nonatomic) UITextField *tfFirstName;
@property (strong, nonatomic) UITextField *tfLastName;
@property (weak, nonatomic) IBOutlet UITextField *tfPhone;
@property (weak, nonatomic) IBOutlet UITextField *tfEmail;
@property (weak, nonatomic) IBOutlet UITextField *tfBirthday;
@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UIButton *btnAboutAndSettings;
@property (strong, nonatomic) UIImageView *topImg;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *iconsToColor;
@property (weak, nonatomic) IBOutlet UIView *viewImageHeader;
@property (weak, nonatomic) IBOutlet UIImageView *imgPencil;
@property (weak, nonatomic) IBOutlet UIView *vNavigation;
@property (weak, nonatomic) IBOutlet UIView *vSafeArea;
@property (weak, nonatomic) IBOutlet UIView *vEditPhoneContainer;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcEditPhoneContainerHeight;

@property (nonatomic) UIDatePicker *dp;
@property (nonatomic) NSMutableDictionary *savedData;
@property (nonatomic) NSString *personId;

@property (nonatomic) CustomStreamCoverMenu *customCoverMenu;
@property (nonatomic) UITapGestureRecognizer *singleTap;
@property (nonatomic) UIImage *currentProfileImage;
@property (nonatomic,assign) CGRect profileCropRect;

- (IBAction)pressBack:(id)sender;
- (IBAction)pressSubmit:(id)sender;
- (IBAction)pressSettings:(id)sender;


@end
