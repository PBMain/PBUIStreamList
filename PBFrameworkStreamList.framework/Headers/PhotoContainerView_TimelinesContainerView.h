#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@import Photos;

@interface TimelinesContainerView : PhotoContainerView {
    
}

@property (nonatomic) BOOL dragRefreshAvailable;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) IBOutlet UIView* loadingView;
@property (nonatomic) NSMutableArray* gridDataSource;
@property (nonatomic) int gridDataTotalImages;
@property (nonatomic) NSMutableArray *arrayRecent;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) NSString *friendId;
@property (nonatomic) LoadingView *lv;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL shouldRefreshInBackground;
@property (nonatomic) BOOL shouldRefreshInForeground;
-(void)getImageTimelines;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;
-(void) setHeaderAppropriately;
-(void) removeImages:(NSMutableArray*)imgArray;

// Smarter image displaying (true when the scrolling is slow enough to warrant loading of images)
@property (nonatomic) BOOL isLoadingImages;
@property (nonatomic) BOOL isProcessingSlowScrolling;
@property (nonatomic) CGPoint lastOffset;
@property (nonatomic) NSTimeInterval lastOffsetCapture;
@property (atomic) NSRecursiveLock *slowScrollingLock;

// Favorites
-(void) setImageFavorite:(NSString*)assetId isFavorite:(BOOL)isFavoritePhoto;

@end
