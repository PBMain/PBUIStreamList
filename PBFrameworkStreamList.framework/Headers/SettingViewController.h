//
//  SettingViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 26/07/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingTableViewCell.h"
#import <MessageUI/MessageUI.h>
#import <PBFrameworkUILibraries/KAProgressLabel.h>

#import "UIView_NewPeopleAlbumView.h"
#import "EditUserProfileDataViewController.h"
#import "UIView_PeopleClusterView.h"
#import "UIView_PeopleIdentifyView.h"
#import "UIView_PeopleOccasionsView.h"
#import "PhotoContainerView_PeoplePlaceAsTimelineView.h"
#import "PhotoContainerView_PeopleRecentTimelineView.h"
#import "EditCurrentUserProfileViewController.h"
#import "NewPersonClusterView.h"
#import "AddAsExistingPeopleView.h"

@interface SettingViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,MFMailComposeViewControllerDelegate>{
    
    IBOutlet UITableView *tblViewForSetting;
    __weak IBOutlet UILabel *lblVersion;
    __weak IBOutlet UILabel *lblUserId;
    
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIImageView *imgConfettiUpper;
    
    IBOutlet UIImageView *imgTemp;
 
    NSTimer *timerManage;
    
    
    IBOutlet UIView *viewNavBarForUpperview;
}

@property (nonatomic) AddAsExistingPeopleView *peopleExistingView;
@property (nonatomic) NewPersonClusterView *objectPersonClusterView;
@property (nonatomic) EditCurrentUserProfileViewController *peopleEditProfileClusterView;
@property (nonatomic) PeopleRecentTimelineView *peopleRecentTimelineView;
@property (nonatomic) PeoplePlaceAsTimelineView *peoplePlacesTimeLineView;
@property (nonatomic) PeopleOccasionsView *peopleOccasionsView;
@property (nonatomic) EditUserProfileDataViewController *peopleEditProfileDataView;
@property (nonatomic) PeopleContainerView *peopleViewController;
@property (nonatomic) UIView_NewPeopleAlbumView *peopleAlbumView;

@property (nonatomic) IBOutlet UIView *viewForRoundIconInUpperView;
@property (nonatomic) IBOutlet UIButton *btnForBlurbInUpperView;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UILabel *lblForDownloadUpperView;
@property (nonatomic) IBOutlet UIView *viewForUpperPart;
@property (nonatomic) IBOutlet UILabel *lblHeaderForTab;
@property (nonatomic) IBOutlet UILabel *lblTitleForUpperView;

@property (nonatomic) UIImageView *imgLineUnder;


@property (nonatomic) IBOutlet UIView *viewNewPeopleAlbumView;
@property (nonatomic) IBOutlet UIView *viewPeople;

@property (weak, nonatomic) IBOutlet UIButton *btnEveryOnePhotos;

@property (nonatomic) IBOutlet UIImageView *imgMainHeaderIcon;

@property (nonatomic) IBOutlet UILabel *lblMainTitle;
@property (nonatomic) IBOutlet UILabel *lblMainSubTitle;

@property (nonatomic) IBOutlet KAProgressLabel *circleView;
@property (nonatomic) IBOutlet UIView *circleImageView;
@property (nonatomic) IBOutlet UIImageView *imgUser;
@property (nonatomic) IBOutlet UIImageView *imgSignal;

@property (weak, nonatomic) IBOutlet UIButton *btnSearch;
@property (weak, nonatomic) IBOutlet UIView *viewNavigationBar;
@property (weak, nonatomic) IBOutlet UIImageView *imgMainIcon;
@property (nonatomic) BOOL isMyProfileClickable;

-(void) shareImageSet:(NSArray*)images;
-(void) addPeopleExistingView:(id)person arrayName:(NSMutableArray *)name friendId:(NSString*)friendId pcView:(PeopleContainerView*)pcView pmView:(PeopleMoreView*)pmView;
-(void) addIdentifyNewClusterView:(NSString*)personId friendId:(NSString*)friendId person:(id)person;
-(void) addEditPeople:(NSArray*)selectedFaces;
-(void) addImageDetailView:(NSMutableArray*) filenames selected:(NSDictionary*)selectedImage locationName:(NSString*)location subtitle:(NSString*)subtitle shouldUnhideToolbarOnExit:(BOOL)shouldUnhideToolbarOnExit albumId:(NSString*)albumId albumName:(NSString*)albumName;

-(void) addPeopleRecentTimeLineView:(NSString*)personId personName:(NSString*)name;

-(void) addPeopleAlbumView:(NSString*) personId name:(NSString*)name subtext:(NSString*)subtext profileImgFilename:(NSString*)profileImgFilename profileImgAssetId:(NSString*)profileImgAssetId profileImgBase64:(NSString*)profileImgBase64 friendId:(NSString*)friendId;

-(void) addPeoplePlacesTimeLineView:(NSString*)personId personName:(NSString*)name locationID:(NSString*)locationID locationName:(NSString*)locationname;

-(void) addPeopleOccasionView:(NSString*)personId personName:(NSString*)personName occasionId:(NSString*)occasionId occasionName:(NSString*)occasionName;

-(void) addEditPeopleUserData:(NSMutableArray *)arraySelected numImages:(int)numImages;

-(void) addPeopleClusterView:(NSString*)personId friendId:(NSString*)friendId person:(id)person;

-(void) addPeopleIdentifyView:(NSString*)personId friendId:(NSString*)friendId;

-(void)viewSet;
-(IBAction) pressEnterStreamCode:(id)sender;

-(void) setPersonName:(NSString*)name;

@end
