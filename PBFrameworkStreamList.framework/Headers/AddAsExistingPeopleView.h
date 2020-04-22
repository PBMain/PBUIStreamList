//
//  AddAsExistingPeopleView.h
//  PhotoButler
//
//  Created by Mirant Patel on 27/09/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
#import <PBFrameworkUIImageCarousel/LoadingView.h>

@class PeopleContainerView;
@class PeopleMoreView;
@import Photos;

@interface AddAsExistingPeopleView : PhotoContainerView<UICollectionViewDelegate,UICollectionViewDataSource>{
    IBOutlet UIView *viewLoading;
}
//@property (nonatomic) LoadingView* lv;

@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UICollectionView *collectionGrid;
@property (nonatomic) IBOutlet UIImageView *imgMainPhoto;

@property (nonatomic) BOOL hasReturnedFromAddService;
@property (nonatomic) BOOL hasReturnedFromRemoveService;
@property (nonatomic) NSMutableArray* names;
@property (nonatomic) NSMutableArray* arrayAdd;
@property (nonatomic) BOOL shouldRevertStatusBar;
@property (nonatomic) BOOL isFormUserRecognize;
@property (nonatomic) BOOL isSetting;

@property (nonatomic) float cellSize;
@property (nonatomic) id person;
@property (nonatomic) NSString *friendId;
@property (nonatomic) LoadingView *lv;
@property (nonatomic) PeopleMoreView *viewPeopleMore;
@property (nonatomic) PeopleContainerView *viewPeopleContainer;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintHeaderHeight;

@end
