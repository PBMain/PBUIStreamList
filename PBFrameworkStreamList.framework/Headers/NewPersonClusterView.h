//
//  NewPersonClusterView.h
//  PhotoButler
//
//  Created by Mirant on 04/11/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

#import <PBFrameworkUIStreamDetails/UIImageView_ImageCircle.h>

@class PeopleContainerView;
@class PeopleMoreView;

@import Photos;

@interface NewPersonClusterView : PhotoContainerView<UITextFieldDelegate>{
    IBOutlet UIView *viewLoading;
}

@property (nonatomic) IBOutlet ImageCircle *imgMainPhoto;

//@property (nonatomic) NSMutableArray *arraySimilar;
@property (nonatomic) NSMutableArray *arrayClustered;
//@property (nonatomic) NSMutableArray *arrayOthers;
@property (nonatomic) NSMutableArray *arrayRemoving;
@property (nonatomic) NSMutableArray *arrayAdding;

@property (nonatomic) NSMutableArray *arrayHidden;

@property (nonatomic) float cellSize;
@property (nonatomic) BOOL showNamedPeople;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *friendId;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet UIView *vTopBar;
@property (nonatomic) IBOutlet UIButton *btnNext;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) id personCheck;
@property (nonatomic) LoadingView *viewLoading;
@property (nonatomic) PeopleMoreView *viewPeopleMore;
@property (nonatomic) PeopleContainerView *viewPeopleContainer;

@property (nonatomic) BOOL shouldRevertStatusBar;
@property (nonatomic) BOOL isSetting;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressNext:(id)sender;

// For user profile alterations
@property (nonatomic) NSMutableDictionary *savedData;
@property (nonatomic) BOOL isFromPeopleTab;

@end
