#import <UIKit/UIKit.h>

#import <TOCropViewController/TOCropViewController.h>

#import <PBFrameworkUIStreamDetails/InviteCodeMenu.h>
#import <PBFrameworkUIStreamDetails/CustomStreamCoverMenu.h>
#import <PBFrameworkUIStreamDetails/CustomCoverCameraViewController.h>
#import <PBFrameworkUIStreamDetails/ChooseImageFromStream.h>

@import Photos;

@interface NewInviteUpcomingStream : UIViewController <InviteCodeMenuDelegate, CustomStreamCoverMenuDelegate, CustomCoverCameraDelegate, TOCropViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, ChooseImageFromStreamDelegate> {
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIView *viewNavigation;
    IBOutlet UIView *viewSafeArea;
    IBOutlet UIView *viewInvite;
    
    __weak IBOutlet UILabel *labelInst;
    IBOutlet UILabel *lblTitle;
    IBOutlet UILabel *lblSubTitle;
    
    IBOutlet UIView *viewOR;
    
    // Vanity Code
    IBOutlet UIView *viewOrContainer;
    IBOutlet UIView *viewOrGradientLeft;
    IBOutlet UIView *viewOrGradientRight;
    IBOutlet UIButton *btnInviteCode;
    IBOutlet UIButton *btnCustomizeInviteCode;
    IBOutlet UIButton *btnBack;
    CAGradientLayer *gradientLeft;
    CAGradientLayer *gradientRight;
    UIAlertAction *saveAction;
    InviteCodeMenu *vanityCodeMenu;
    NSString *vanityCodeNew;
    
    // Custom Covers
    CustomStreamCoverMenu *customCoverMenu;
    NSString *customCoverType;
}

@property (assign, nonatomic) BOOL isActive;
@property (assign, nonatomic) BOOL isHost;

@property (weak, nonatomic) IBOutlet UIButton *buttonQuest;
@property (weak, nonatomic) IBOutlet UIButton *buttonInviteCode;
@property (weak, nonatomic) IBOutlet UIButton *buttonInvite;

@property (retain,nonatomic) IBOutlet UIView *viewYouAreHosting;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *hightMainImageView;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *heightYouAreHosting;
@property (retain,nonatomic) IBOutlet UIScrollView *scrView;
@property (retain,nonatomic) IBOutlet UIImageView *imageviewMainBack;
@property (retain,nonatomic) IBOutlet UILabel *lblHostedBy;
@property (retain,nonatomic) IBOutlet UILabel *lblDateManage;
@property (retain,nonatomic) IBOutlet UILabel *lblCounter;
@property (retain,nonatomic) IBOutlet UIButton *btnCamera;
@property (retain,nonatomic) IBOutlet UIButton *btnEdit;

@property (retain,nonatomic) IBOutlet UILabel *lblRecipientsViewed;
@property (retain,nonatomic) IBOutlet UILabel *lblRecipientsSharedWith;
@property (retain,nonatomic) IBOutlet UIImageView *imgPeople;
@property (retain,nonatomic) IBOutlet UIView *viewMainCounter;
@property (retain,nonatomic) IBOutlet UIView *viewMainImageCounter;
@property (retain,nonatomic) IBOutlet UIView *viewCover;

@property (nonatomic) NSDictionary *album;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *inviteCode;
@property (nonatomic) NSString *hostName;
@property (nonatomic) NSString *hostId;
@property (nonatomic) NSDate *startDate;
@property (nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isPrivate;

@property (nonatomic) int recipientsSharedWith;
@property (nonatomic) int recipientsViewed;

@property (nonatomic) NSTimer *timer;

-(void)manageDataToObject;

// Custom covers
@property (nonatomic) UIButton* btnCustomCover;
@property (nonatomic) TOCropViewController *cropController;
@property (nonatomic) UIImagePickerController *libraryPicker;
@property (nonatomic) PHAsset *assetFromLibrary;
@property (nonatomic) NSString *tmpCustomCoverAssetID;
@property (nonatomic) NSString *tmpCustomCoverFileName;
@property (nonatomic) NSString *tmpCustomCoverCreationDate;

@property (nonatomic, retain) IBOutletCollection(UIView) NSArray *viewsAssociatedWithInviteCodes;

@end
