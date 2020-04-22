#import <UIKit/UIKit.h>
#import "IdentifyPeopleContactController.h"
#import "ContactPeopleIdentifyViewController.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

#import <PBFrameworkUIStreamDetails/UIImageView_ImageCircle.h>

@import Photos;

@class PeopleContainerView;
@class PeopleMoreView;

@interface PeopleIdentifyView : PhotoContainerView<UITextFieldDelegate,IdentifyPeopleContactControllerDelegate,ContactPeopleIdentifyViewControllerDelegate> {
    IdentifyPeopleContactController *identifyPeopleContactController;
    ContactPeopleIdentifyViewController *contactIdentifyPeopleContactController;
    IBOutlet UIButton *btnAddEdit;
    IBOutlet UIButton *btnBlurb;
    IBOutlet UIView *viewTextField;
    IBOutlet UIView *viewImageHeader;
    IBOutlet UIImageView *imgTopView;
}

@property (nonatomic) BOOL isSetting;

@property (nonatomic) LoadingView *viewLoading;
@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) NSMutableArray *arrayAddToCluster;
@property (nonatomic) NSMutableArray *arrayRemoveFromCluster;
@property (nonatomic) NSMutableArray *arrayUnchangedFromCluster;
@property (nonatomic) BOOL hasReturnedFromAddService;
@property (nonatomic) BOOL hasReturnedFromRemoveService;
@property (nonatomic) BOOL hasReturnedFromUpdateName;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *personIdOld;
@property (nonatomic) NSString *idMasterNew;
@property (nonatomic) NSString *personName;
@property (nonatomic) NSString *friendId;
@property (nonatomic) NSString *numberPhotos;
@property (nonatomic) IBOutlet UIView *topBarView;
@property (nonatomic) IBOutlet UIImageView *topImg;
@property (nonatomic) IBOutlet ImageCircle *topIdentify;
@property (nonatomic) IBOutlet UIButton *backButton;

@property (nonatomic) IBOutlet UIButton *submitButton;
@property (nonatomic) IBOutlet UIButton *deleteButton;
@property (nonatomic) IBOutlet UIView *containerView;
@property (nonatomic) IBOutlet UIView *headerView;
@property (nonatomic) IBOutlet UITextField *txtName;
@property (nonatomic) IBOutlet UITextField *txtEmail;
@property (nonatomic) IBOutlet UITextField *txtPhone;
@property (nonatomic) IBOutlet UITextField *txtBirthday;
@property (nonatomic) BOOL shouldRevertStatusBar;
@property (nonatomic) IBOutlet UIScrollView *scrView;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintHeaderHeight;

@property (nonatomic) NSMutableArray *arrayPossibleFaces;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSubmit:(id)sender;
-(IBAction)pressNameText:(id)sender;
-(void) refreshFromClustering;

@end
