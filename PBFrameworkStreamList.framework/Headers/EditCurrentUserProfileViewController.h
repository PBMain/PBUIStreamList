//
//  EditCurrentUserProfileViewController.h
//  PhotoButler
//
//  Created by Mirant Patel on 30/09/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
#import <PBFrameworkUIImageCarousel/LoadingView.h>

@interface EditCurrentUserProfileViewController : PhotoContainerView
{
    
}

@property (nonatomic) NSMutableArray *arrayUnidentified;
@property (nonatomic) NSMutableArray *arrayIdentified;
@property (nonatomic) NSMutableArray *arrayOfSelectedData;
@property (nonatomic) NSMutableDictionary *hashPhotoCounts;
@property (nonatomic) NSString *selectedPersonId;
@property (nonatomic) Boolean selectedPersonIsNamed;
@property (nonatomic) float cellSize;
@property (nonatomic) BOOL hasReturnedFromAddService;
@property (nonatomic) BOOL hasReturnedFromRemoveService;
@property (nonatomic) BOOL didTapClusterFromAlbum;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet UIView *vTopBar;
@property (nonatomic) IBOutlet UIButton *btnNext;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) NSMutableDictionary *savedData;

@property (nonatomic) LoadingView *lv;
@property (nonatomic) UIView *viewLoading;
@property (nonatomic) BOOL shouldRevertStatusBar;
@property (nonatomic) BOOL isSetting;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressNext:(id)sender;
@property (nonatomic) BOOL isFromPeopleTab;


@end
