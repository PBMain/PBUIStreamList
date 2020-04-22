#import <UIKit/UIKit.h>
#import "EventsCategoriesCollectionViewCell.h"

#import "MoreStreamsViewController.h"

// For opening an album
#import "MoreStreamsCell.h"

@class StreamsModel;
@interface FreshStartCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, EventsCategoriesCellDelegate, PhotoAlbumViewControllerDelegate, MoreStreamsCellDelegate, MoreStreamsVCDelegate>

@property (nonatomic) StreamsModel *model;
@property (nonatomic) NSMutableArray *sectionMoreStatus;

@property (nonatomic) NSMutableArray *arrayTopEvents;
@property (nonatomic) NSMutableArray *arrayAroundWorld;
@property (nonatomic) NSMutableArray *arrayJustAnnounced;
@property (nonatomic) NSMutableArray *arrayRecentPublicStreams;
@property (nonatomic) NSMutableArray *arrayBottomEvents;

// Loading and drag refresh
@property (nonatomic) BOOL didLayout;
@property (nonatomic) LoadingView *viewLoading;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (nonatomic) BOOL dragRefreshAvailable;

@end
