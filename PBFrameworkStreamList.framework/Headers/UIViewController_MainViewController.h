#import <UIKit/UIKit.h>
#import "UIButton_GreenButton.h"
#import "UIView_NewPeopleAlbumView.h"
#import "UIView_OccasionDetails.h"

#import "UIView_PeopleClusterView.h"
#import "AddAsExistingPeopleView.h"
#import "UIView_PeopleIdentifyView.h"
#import "UIView_PeopleMoreView.h"
#import "UIView_LocationAlbumView.h"
#import "UIView_NewLocationAlbumView.h"
#import "UIView_MagicAlbumEditView.h"
#import "UIView_PeopleOccasionsView.h"
#import "UIView_ExistingMagicAlbumsGrid.h"
#import "UIViewController_NewMagicAlbumViewController.h"

#import "UITabBarController_PhotosTabBarController.h"
#import "PhotoContainerView_PeopleRecentTimelineView.h"
#import "PhotoContainerView_PeoplePlaceAsTimelineView.h"
#import "UIView_HeaderTiles.h"
#import "EditCurrentUserProfileViewController.h"

#import "EditUserProfileDataViewController.h"
#import "NewPersonClusterView.h"

#import "StartStreamOptions.h"

#import <PBFrameworkUIStreamDetails/PhotoAlbumViewController.h>
#import <PBFrameworkUILibraries/KAProgressLabel.h>
#import <PBFrameworkUIImageCarousel/UIView_ImageDetailView.h>

@interface MainViewController : UIViewController <PhotoAlbumViewControllerDelegate>{
    
    IBOutlet UILabel *lblTitleForTabbar;
    
    IdentifyPeopleContactController *identifyPeopleContactController;
    IBOutlet UIView *viewWithShareBackGroundLayer;
    IBOutlet UIView *viewWithGrayBorderShadow;
    IBOutlet UILabel *lblTitleForUpperView;
    IBOutlet UIView *viewNavBarForUpperview;
    IBOutlet UIView *viewForWandSubview;
    
    IBOutlet UIView *viewForTransparentCollectInstant;
    
    IBOutlet UIImageView *imgButlerInWandButtonNewView;
    IBOutlet UIImageView *imgTempForShadow;
    IBOutlet UIImageView *imgForCollectPhotos;
    IBOutlet UIImageView *imgForInstantPhotosStream;
    IBOutlet UIImageView *imgForButlerLightbulb;
    
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIImageView *imgConfettiUpper;
    IBOutlet UIImageView *imgSignal;
    NSTimer *timerManage;
    
    IBOutlet UIButton *btnForLayoutMagicAlbum;
    IBOutlet UIImageView *imgForLayoutMagicAlbum;
}

@property (weak, nonatomic) IBOutlet UIView *viewNavigationBarMain;

//@property (nonatomic, strong) DXPopover *popover;
@property (nonatomic) PhotosTabBarController *tabPhoto;

@property (nonatomic) IBOutlet KAProgressLabel *circleView;
@property (nonatomic) IBOutlet UIImageView *headerImage;
@property (nonatomic) HeaderTiles *headerTileView;
@property (nonatomic) IBOutlet UIImageView *profilePic;
@property (nonatomic) AlbumView *albumView;
@property (nonatomic) ImageDetailView *imageDetailView;
@property (nonatomic) UIView_NewPeopleAlbumView *peopleAlbumView;
@property (nonatomic) UIView_NewLocationAlbumView *nLocationAlbumView;
@property (nonatomic) OccasionDetails *occasionDetailsView;

@property (nonatomic) IBOutlet UIView *viewForUpperPart;
@property (nonatomic) IBOutlet UIView *viewForWandSubview;
@property (nonatomic) IBOutlet UIView *viewForSubViewMainView;

@property (nonatomic) IBOutlet UIView *viewForWandButtonOntheTop;

@property (nonatomic) IBOutlet UIView *viewForRoundIconInUpperView;
@property (nonatomic) IBOutlet UIButton *btnForBlurbInUpperView;
@property (nonatomic) IBOutlet UILabel *lblForDownloadUpperView;
@property (nonatomic) IBOutlet UIButton *btnActivity;

@property (nonatomic) NewPersonClusterView *objectPersonClusterView;
@property (nonatomic) PeopleOccasionsView *peopleOccasionsView;
@property (nonatomic) AddAsExistingPeopleView *peopleExistingView;
@property (nonatomic) EditCurrentUserProfileViewController *peopleEditProfileClusterView;
@property (nonatomic) EditUserProfileDataViewController *peopleEditProfileDataView;
@property (nonatomic) PeopleMoreView *peopleMoreView;
@property (nonatomic) LocationAlbumView *locationAlbumView;
@property (nonatomic) MagicAlbumEditView *magicAlbumEditView;
@property (nonatomic) NewMagicAlbumViewController *theNewMagicAlbumViewController;
@property (nonatomic) ExistingMagicAlbumsGrid *existingMagicAlbumsGrid;
@property (nonatomic) PeopleRecentTimelineView *peopleRecentTimelineView;
@property (nonatomic) PeoplePlaceAsTimelineView *peoplePlacesTimeLineView;
@property (nonatomic) IBOutlet UIToolbar *toolbar;
@property (nonatomic) IBOutlet UIBarButtonItem *backButton;
@property (nonatomic) IBOutlet UIBarButtonItem *searchButton;
@property (nonatomic) IBOutlet UIButton *searchButtonNew;
@property (nonatomic) IBOutlet UIBarButtonItem *shareButton;
@property (nonatomic) IBOutlet UIButton *btnHeaderShare;
@property (nonatomic) IBOutlet UIBarButtonItem *headerBarTitle;
@property (nonatomic) IBOutlet UILabel *lblHeaderBarTitle;
@property (nonatomic) IBOutlet UIBarButtonItem *headerProgress;
@property (nonatomic) IBOutlet UIView *containerView;
@property (nonatomic) IBOutlet UIView *photosSceneMainView;
@property (nonatomic) IBOutlet UIView *circleProgress;
@property (nonatomic) IBOutlet UILabel *lblName;
@property (nonatomic) IBOutlet UILabel *lblSubtext;
@property (nonatomic) IBOutlet UIButton *btnEditProfile;
@property (nonatomic) IBOutlet UIButton *btnHeaderWand;
@property (nonatomic) IBOutlet UIButton *btnMagicWandBelow;
@property (nonatomic) UIImage *header;
@property (nonatomic) IBOutlet UIView *gradientView;
@property (nonatomic) UIView *circleBehind;
@property (nonatomic) BOOL isStatusBarDark;
@property (nonatomic) BOOL isOccasionDetailView;
@property (nonatomic) BOOL isMyProfileClickable;

@property (nonatomic) IBOutlet UIImageView *imgShareBackgroundPopup;
@property (nonatomic) IBOutlet UIImageView *imgShareLogoPopup;
@property (nonatomic) IBOutlet UIView *viewPopUpShare;
@property (nonatomic) IBOutlet UIView *viewPopUpShareContainer;
@property (nonatomic) IBOutlet UIButton *btnSharePopup;

@property (nonatomic) UIView *contactList;

@property (nonatomic) IBOutlet UIView *viewForEditMagicAlbum;
@property (nonatomic) IBOutlet UIView *viewForLayout;

@property (nonatomic) NSMutableArray *arrayRecentlyPass;

@property (strong, nonatomic) IBOutlet UIView *viewForDetailController;

// Height constraints
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *hgtHeader;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *hgtGradient;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *hgtContainer;

-(IBAction)pressBack:(id)sender;
-(IBAction)btnScanProgress:(id)sender;
-(IBAction)pressSearch:(id)sender;
-(IBAction)pressShare:(id)sender;
-(IBAction)pressEditProfile:(id)sender;

// Albums and Image Details
-(void) addImageAlbumView:(NSMutableArray*) filenames locationName:(NSString*)locationName;
-(void) addImageDetailView:(NSMutableArray*) filenames selected:(NSDictionary*)selectedImage locationName:(NSString*)location subtitle:(NSString*)subtitle shouldUnhideToolbarOnExit:(BOOL)shouldUnhideToolbarOnExit albumId:(NSString*)albumId albumName:(NSString*)albumName;

// Location
-(void) addLocationAlbumView:(NSString*) locationId name:(NSString*)name profileImgFilename:(NSString*)profileImgFilename profileImgAssetId:(NSString*)profileImgAssetId;

// People
-(void) addPeopleAlbumView:(NSString*) personId name:(NSString*)name subtext:(NSString*)subtext profileImgFilename:(NSString*)profileImgFilename profileImgAssetId:(NSString*)profileImgAssetId profileImgBase64:(NSString*)profileImgBase64 friendId:(NSString*)friendId;

-(void) addPeopleRecentTimeLineView:(NSString*)personId personName:(NSString*)name;
-(void) addPeoplePlacesTimeLineView:(NSString*)personId personName:(NSString*)name locationID:(NSString*)locationID locationName:(NSString*)locationname;
-(void) addPeopleMoreView:(PeopleContainerView*)pcView;
-(void) addPeopleIdentifyView:(NSString*)personId friendId:(NSString*)friendId;
-(void) addPeopleClusterView:(NSString*)personId friendId:(NSString*)friendId person:(id)person;
-(void) addIdentifyNewClusterView:(NSString*)personId friendId:(NSString*)friendId person:(id)person;

-(void) addEditPeople:(NSArray*)selectedFaces;
-(void) addEditPeopleUserData:(NSMutableArray *)arraySelected numImages:(int)numImages;

-(void) addPeopleExistingView:(id)person arrayName:(NSMutableArray *)name friendId:(NSString*)friendId pcView:(PeopleContainerView*)pcView pmView:(PeopleMoreView*)pmView;

-(void) addPeopleOccasionView:(NSString*)personId personName:(NSString*)personName occasionId:(NSString*)occasionId occasionName:(NSString*)occasionName;

// Occasions
-(void) addOccasionAlbumView:(NSString*)occasionId name:(NSString*)name subtext:(NSString*)subtext icon:(NSString*)iconName;
-(void) addOccasionYearView:(NSString*)occasionId year:(NSString*)year title:(NSString*)title;

// Magic Albums
-(void)loadMagicAlbumCreationResultView:(NSString*)paramString errorCall:(void (^)(id response))errorCall;
-(void)loadMagicAlbumView:(NSString*)magicAlbumId magicAlbumName:(NSString*)magicAlbumName;
-(void)showMagicAlbumWithId:(NSString*)magicAlbumId;
-(void)showNewMagicAlbumView;
-(void)showPhotoAlbum:(NSString*)albumId isStream:(BOOL)isStream;
-(void) showBadgeOnActivity;

-(IBAction)pressOpenCreateMagicAlbumChoice:(id)sender;
-(IBAction)pressCloseCreateMagicAlbumChoice:(id)sender;
-(IBAction)btnForConstantInstantPhoto:(UIButton *)sender;
-(IBAction)pressActivity:(id)sender;

// Sharing
-(IBAction)pressCloseSharePopUp:(id)sender;
-(void) shareSingleImage:(NSString*)assetId;
-(void) shareImageSet:(NSArray*)images;
-(void) hideSharePopup;
-(void) showSharePopup;
-(IBAction) pressEnterStreamCode:(id)sender;

// Header Functions
@property (nonatomic) BOOL isHeaderSmall;
-(void)setupHeaderForCurrentUser;
-(void)showHeader;
-(void)hideHeader;
-(float)hideHeader : (float)hidePoint;
-(void)showProgress;
-(float)showHeader : (float)showPoint;
-(void)hideProgress;
-(void)fixHeader;

// Upload opt-in
-(void) pressOptIn:(id)sender;

// Set person name in person profile view
-(void) setPersonName:(NSString*)name;

@end
