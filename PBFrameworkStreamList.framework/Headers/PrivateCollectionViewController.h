//
//  PrivateCollectionViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 6/30/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

// More
#import "MoreStreamsViewController.h"

// Cells
#import "EventsCategoriesCollectionViewCell.h"
#import "LargeHeroCell.h"
#import "MoreStreamsCell.h"
#import "UpcomingCell.h"

// Creating Album
#import "NewPhotoStream.h"


@class StreamsModel;
@interface PrivateCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, EventsCategoriesCellDelegate, PhotoAlbumViewControllerDelegate, MoreStreamsCellDelegate, MoreStreamsVCDelegate>

@property (nonatomic) StreamsModel *model;
@property (nonatomic) NSMutableArray *sectionMoreStatus;

@property (nonatomic) NSMutableArray *arrayLive;
@property (nonatomic) NSMutableArray *arrayUpcoming;
@property (nonatomic) NSMutableArray *arrayPast;

// Loading and drag refresh
@property (nonatomic) BOOL didLayout;
@property (nonatomic) LoadingView *viewLoading;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (atomic) NSLock *lockDBReload;
@property (atomic) BOOL needsReloadFromDB;
@property (nonatomic) BOOL dragRefreshAvailable;

@end
