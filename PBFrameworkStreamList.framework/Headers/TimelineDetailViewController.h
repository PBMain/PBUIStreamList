//
//  TimelineDetailViewController.h
//  PhotoButler
//
//  Created by Mirant on 25/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineDetailViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource>

@property (weak, nonatomic) IBOutlet UICollectionView *colvForTimeline;

@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UIView *viewNavigationSet;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) NSMutableArray *arrayDataForTimeLine;
@property (nonatomic) int sectionNumber;
@property (nonatomic) float cellSize;

-(void) removeImages:(NSArray*) assetids;

// Smarter image displaying (true when the scrolling is slow enough to warrant loading of images)
@property (nonatomic) BOOL isLoadingImages;
@property (nonatomic) BOOL isProcessingSlowScrolling;
@property (nonatomic) CGPoint lastOffset;
@property (nonatomic) NSTimeInterval lastOffsetCapture;
@property (atomic) NSRecursiveLock *slowScrollingLock;

// Favorites
-(void) setImageFavorite:(NSString*)assetId isFavorite:(BOOL)isFavoritePhoto;

@end
