//
//  UIView_NewPeopleAlbumView.h
//  PhotoButler
//
//  Created by Mirant on 25/11/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
#import <UIKit/UIKit.h>
@class MainViewController;

@import Photos;

@interface UIView_NewPeopleAlbumView : PhotoContainerView {
    BOOL firstDraw;
}

@property (nonatomic) NSString *fromPhotoStreamID;

@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *personName;
@property (nonatomic) NSString *numberOfImage;
@property (nonatomic) int personAssetCount;

@property (nonatomic) NSMutableArray *places;
@property (nonatomic) NSMutableArray *occasions;
@property (nonatomic) NSMutableArray *recently;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL placesExpanded;
@property (nonatomic) BOOL occasionsExpanded;
@property (nonatomic) BOOL recentlyExpanded;
@property (nonatomic) BOOL isYourself;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;

-(void) getPersonInformation;
-(void) error:(NSString*)message;
-(void) pressCluster;
-(void) nukeTimer;

@end
