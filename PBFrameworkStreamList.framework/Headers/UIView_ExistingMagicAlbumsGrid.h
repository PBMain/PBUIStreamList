#import <UIKit/UIKit.h>
#import "UIView_SearchFilterBar.h"
#import "UIView_GridParent.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>

@import Photos;

@class NewMagicAlbumViewController;

@interface ExistingMagicAlbumsGrid : GridParent <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout> {
    
}

@property (nonatomic) BOOL dragRefreshAvailable;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (strong) NSMutableArray *allAlbums;
@property (strong) NSMutableArray *magicAlbums;
@property (strong) NSMutableArray *photoStreams;
@property (nonatomic) UICollectionView *grid;
@property (nonatomic) float cellSize;
@property (nonatomic) BOOL clickOnce;
@property (nonatomic) BOOL loadOnDisplay;
@property (nonatomic) BOOL shouldRefreshInBackground;
@property (nonatomic) BOOL shouldRefreshInForeground;
@property (nonatomic) LoadingView *loadingView;

@property (nonatomic) UICollectionView *horizontalScrollingPhotoStreamGrid;
@property (nonatomic) BOOL isStreamGridExpanded;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;
-(void) setHeaderAppropriately;
-(void) getAlbumData;
-(void) getAlbumDataIfChanges;

@end
