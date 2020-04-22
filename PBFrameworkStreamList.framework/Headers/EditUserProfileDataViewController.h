#import <UIKit/UIKit.h>
#import "IdentifyPeopleContactController.h"
#import "ContactPeopleIdentifyViewController.h"

#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
#import <PBFrameworkUIStreamDetails/UIImageView_ImageCircle.h>

@interface EditUserProfileDataViewController : PhotoContainerView<UITextFieldDelegate> {
    IBOutlet UIButton *btnAddEdit;
    IBOutlet UIView *viewTextField;
    IBOutlet UIView *viewImageHeader;
    IBOutlet UIImageView *imgTopView;
}

@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *friendId;
@property (nonatomic) IBOutlet UIView *topBarView;
@property (nonatomic) IBOutlet UIImageView *topImg;
@property (nonatomic) IBOutlet ImageCircle *topIdentify;
@property (nonatomic) IBOutlet UIButton *backButton;
@property (nonatomic) IBOutlet UIButton *btnBlurb;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *iconsToColor;

@property (nonatomic) IBOutlet UIButton *submitButton;
@property (nonatomic) IBOutlet UIView *containerView;
@property (nonatomic) IBOutlet UIView *headerView;
@property (nonatomic) IBOutlet UITextField *txtFirstName;
@property (nonatomic) IBOutlet UITextField *txtLastName;
@property (nonatomic) IBOutlet UITextField *txtEmail;
@property (nonatomic) IBOutlet UITextField *txtPhone;
@property (nonatomic) IBOutlet UITextField *txtBirthday;
@property (nonatomic) BOOL shouldRevertStatusBar;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) IBOutlet UIScrollView *scrView;
@property (nonatomic) int badgeNumber;
@property (nonatomic) NSMutableDictionary *savedData;

@property (nonatomic) NSMutableArray *arrayPossibleFaces;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressCluster:(id)sender;
-(IBAction)pressSubmit:(id)sender;
-(IBAction)pressRemoveProfile:(id)sender;
-(IBAction)pressSettings:(id)sender;
@property (nonatomic) BOOL isFromPeopleTab;

@end
