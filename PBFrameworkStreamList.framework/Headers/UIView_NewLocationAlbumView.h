//
//  UIView_NewLocationAlbumView.h
//  PhotoButler
//
//  Created by Mirant on 25/11/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@import Photos;

@interface UIView_NewLocationAlbumView : PhotoContainerView{
    BOOL isFirstLoad;
}

@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) NSMutableArray *peopleSeenWithArray;
@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float smallCellSize;
@property (nonatomic) float largeCellSize;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) NSString *locationName;
@property (nonatomic) NSString *locationId;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL expandPeopleSeenWith;
@property (nonatomic) LoadingView *loadingView;
@property (nonatomic) NSMutableArray* names;
@property (nonatomic) int assetCount;
@property (nonatomic) UILabel *lbltitle;
@property (nonatomic) UILabel *lblsubtitle;

@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL isSelectionMode;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;

-(void) removeImages:(NSMutableArray*)imgArray;

-(void) removeImagesByAssetIds:(NSArray*) assetids;

@end
