//
//  HomeCollectionViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 6/30/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EventsCategoriesCollectionViewCell.h"
#import "MoreStreamsViewController.h"
#import <PBFrameworkServices/ViewCollector.h>
#import "NestedMoreClickProtocol.h"

@class StreamsModel;
@interface HomeCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, MoreStreamsVCDelegate, EventsCategoriesCellDelegate, NestedMoreClickProtocol>

@property (nonatomic) StreamsModel *model;
@property (nonatomic) NSMutableArray *sectionMoreStatus;

@property (nonatomic) NSMutableArray *arrayLiveStreams;
@property (nonatomic) NSMutableArray *arrayLiveStreamsNew;

@property (nonatomic) NSMutableArray *arrayUpcomingStreams;
@property (nonatomic) NSMutableArray *arrayUpcomingStreamsNew;

@property (nonatomic) NSMutableArray *arrayRecentPrivateStreams;
@property (nonatomic) NSMutableArray *arrayRecentPrivateStreamsNew;

@property (nonatomic) NSMutableArray *arrayRecentPublicStreams;
@property (nonatomic) NSMutableArray *arrayRecentPublicStreamsNew;

// Loading and drag refresh
@property (nonatomic) BOOL didLayout;
@property (nonatomic) LoadingView *viewLoading;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (atomic) NSLock *lockDBReload;
@property (atomic) BOOL needsReloadFromDB;
@property (nonatomic) BOOL dragRefreshAvailable;

@end
