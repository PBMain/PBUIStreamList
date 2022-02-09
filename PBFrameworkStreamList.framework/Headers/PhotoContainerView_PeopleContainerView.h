#import <UIKit/UIKit.h>
#import <PBFrameworkUIImageCarousel/UIView_AlbumView.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@import Photos;

@class MainViewController;
@interface PeopleContainerView : PhotoContainerView <UIScrollViewDelegate> {
    
}

@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) IBOutlet UIView* loadingView;
@property (nonatomic) NSMutableArray* names;
@property (nonatomic) NSMutableArray* peopleToIdentify;
@property (nonatomic) float edgeSpaceHorizontal;
@property (nonatomic) int currentPage;
@property (nonatomic) LoadingView *lv;
@property (nonatomic) BOOL dragRefreshAvailable;
@property (nonatomic) BOOL shouldHideLightBulbBox;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL displayingMoreIdentify;
@property (nonatomic) BOOL displayingMoreNamed;
@property (nonatomic) UIAlertController *alertController;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;
-(void) setHeaderAppropriately;

@end
