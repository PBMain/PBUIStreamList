#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@interface OccasionDetails : PhotoContainerView {
    
}

@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) NSMutableArray *peopleSeenWithArray;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float smallCellSize;
@property (nonatomic) float largeCellSize;
@property (nonatomic) NSString *occasionName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL expandPeopleSeenWith;
@property (nonatomic) LoadingView *loadingView;
@property (nonatomic) UICollectionView *peopleGrid;
@property (nonatomic) NSMutableArray* names;
@property (nonatomic) int assetCount;

@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL isSelectionMode;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;

-(void) getOccasionInformation;

@end
