#import <UIKit/UIKit.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
#import "UIViewController_MainViewController.h"
@import Photos;

@interface OccasionsContainerView : PhotoContainerView {
    
}

@property (nonatomic) BOOL dragRefreshAvailable;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) IBOutlet UIView* loadingView;
@property (nonatomic) IBOutlet UIView* noContentView;
@property (nonatomic) LoadingView *lv;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) NSMutableArray* occasions;
@property (nonatomic) NSMutableArray* birthdays;
@property (nonatomic) UIImageView *backgroundImage;
@property (nonatomic) BOOL shouldRefreshInBackground;
@property (nonatomic) BOOL shouldRefreshInForeground;

-(void)getImageOccasions;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;
-(void) setHeaderAppropriately;

@end
