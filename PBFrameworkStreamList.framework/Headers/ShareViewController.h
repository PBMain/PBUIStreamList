//
//  ShareViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 29/07/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#define shareViewControllerEmptyStreams NO

#import <UIKit/UIKit.h>

#import <PBFrameworkUILibraries/KAProgressLabel.h>

@class FreshStartCollectionViewController;
@class HomeCollectionViewController;
@class PrivateCollectionViewController;
@class PublicCollectionViewController;
@class NewTabBarView;
@class DGActivityIndicatorView;
@class NewPersonClusterView;
@class LoadingView;
@class GotAnInviteCode;
@class OfflineBanner;
@class ImageDetailView;

@protocol NewTabBarViewProtocol;
@protocol MoreStreamsVCDelegate;
@protocol ShareViewControllerForPickerTableDelegate;
@protocol PhotoAlbumViewControllerDelegate;

@interface ShareViewController : UIViewController <NewTabBarViewProtocol, MoreStreamsVCDelegate, UISearchBarDelegate, ShareViewControllerForPickerTableDelegate, PhotoAlbumViewControllerDelegate>
{
    IBOutlet UIButton *btnViewTitle;
    IBOutlet UIView *viewLoading;
    NSString *lblMessage;
    
    IBOutlet UIImageView *imgSignal;
    
    NSTimer *timerManage;
    
}

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topTabBarHeight;
@property (weak, nonatomic) IBOutlet UIView *containerForVCs;

@property (weak, nonatomic) IBOutlet UIView *viewNavigationBarMain;

//Entire full page view.
@property (strong, nonatomic) IBOutlet UIView *fullView;
@property (nonatomic) BOOL isNavigateUser;

// Header
@property (nonatomic) IBOutlet UISearchBar *sbSearch;
@property (nonatomic) IBOutlet UIView *vBuffer;
@property (nonatomic) IBOutlet UIButton *btnActivity;
@property (nonatomic) IBOutlet UILabel *lblMainTitle;
@property (nonatomic) IBOutlet UILabel *lblMainSubTitle;
@property (nonatomic) IBOutlet KAProgressLabel *circleView;
@property (nonatomic) IBOutlet UIView *circleImageView;
@property (nonatomic) IBOutlet UIImageView *imgUser;
@property (weak, nonatomic) IBOutlet UIView *vProfileTapArea;

//Top Tab bar
@property (nonatomic) NewTabBarView *topTabView;
// Streams label.
//@property (weak, nonatomic) IBOutlet UILabel *lblStreams;

@property (nonatomic) ImageDetailView *imageDetailView;
@property (nonatomic) NSTimer* loadingTimer;
@property (strong, nonatomic) IBOutlet UIView *viewNotification;
@property (strong, nonatomic) IBOutlet UIView *viewComingSoon;
@property (strong, nonatomic) DGActivityIndicatorView *activityIndicatorView;

@property (strong, nonatomic) IBOutlet UIView *viewTableview;

@property (strong, nonatomic) IBOutlet UIView *viewComingSoonContainer;

@property (nonatomic) NewPersonClusterView *personClusterView;

@property (nonatomic) LoadingView* lv;

@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (atomic) BOOL isReloadingStreamsForUniversalLink;
@property (nonatomic) BOOL dragRefreshAvailable;

@property (nonatomic) BOOL profilePicLoaded;

@property (nonatomic) BOOL shouldRefreshInBackground;
@property (nonatomic) BOOL shouldRefreshInForeground;

@property (nonatomic) NSMutableDictionary* hashRecipients;
@property (nonatomic) IBOutlet UIButton *btnHeaderStreamCode;
@property (nonatomic) float cellSize;
@property (nonatomic) NSDate *albumShowingTimerDate;
@property (nonatomic) int pastSectionFavorites;
@property (nonatomic) int pastSectionYours;
@property (nonatomic) int pastSectionOthers;
@property (nonatomic) NSTimer *removeLoadingTimer;
@property (nonatomic) NSDate *removeLoadingDate;

@property (nonatomic) GotAnInviteCode *gotAnInviteCode;

@property (nonatomic) FreshStartCollectionViewController *freshStartVC;
@property (nonatomic) HomeCollectionViewController *homeVC;
@property (nonatomic) PrivateCollectionViewController *privateVC;
@property (nonatomic) PublicCollectionViewController *publicVC;



// New Tab var view
@property (nonatomic,retain) IBOutlet UIView *viewNewTabbar;

-(void) getImageTimelines;
-(void) getImageTimelinesIfChanged;
-(void) addImageDetailView:(NSMutableArray*) filenames selected:(NSDictionary*)selectedImage locationName:(NSString*)location subtitle:(NSString*)subtitle shouldUnhideToolbarOnExit:(BOOL)shouldUnhideToolbarOnExit albumId:(NSString*)albumId albumName:(NSString*)albumName;
-(void) addEditPeopleUserData : (UITapGestureRecognizer *)sender;
//-(IBAction)pressEditProfile:(id)sender;
-(void) addEditPeopleUserData:(NSMutableArray *)arraySelected numImages:(int)numImages;
-(void) addProfileClusterView;
// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;
// Offline notification banner
@property (nonatomic) OfflineBanner *offlineBanner;
-(void) addUserProfileEditView;
-(void) editUserProfile;
-(void) showBadgeOnActivity;

// Actions
-(IBAction)pressClosePastNotification:(id)sender;
-(void) viewSet;
-(IBAction)btnForNewStream:(UIButton *)sender;
-(IBAction)btnInviteCode:(id)sender;
-(IBAction)pressActivity:(id)sender;
-(void) setFavoriteWithID:(NSString*) psid isFavorite:(BOOL)isFavorite;
-(BOOL)isFirstTimeHosting;
-(void)removeLoadingIfReady;
- (void)getImageTimelinesFromDB;
-(void) refreshLiveStreamsFromDB;
// Loading view
-(void) hideLoading;
-(void) tabStateActivate;
-(void) navigateToLinkedStream;

@end
