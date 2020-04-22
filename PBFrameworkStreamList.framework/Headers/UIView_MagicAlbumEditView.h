#import <UIKit/UIKit.h>
#import "UIView_GridParent.h"
#import "UIView_SearchFilterBar.h"
#import "SearchFilterCollectionViewCell.h"
#import "EditPhotoStreamViewController.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@import Photos;

@interface MagicAlbumEditView : PhotoContainerView <UITextFieldDelegate> {
    BOOL isFirstLoad;
}

@property (nonatomic) UIAlertController *alertController1;
@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) NSMutableArray *arrayRemoved;
@property (nonatomic) NSMutableArray *peopleHereImages;
@property (nonatomic) NSMutableDictionary *creationParams;
@property (nonatomic) NSMutableArray *arrayPeople;
@property (nonatomic) NSMutableArray *arrayPlaces;
@property (nonatomic) NSMutableArray *arrayOccasions;
@property (nonatomic) BOOL expandPeopleSeenWith;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isMagicAlbum;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumCreationString;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *dateTo;
@property (nonatomic) NSString *dateFrom;
@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) float smallCellSize;
@property (nonatomic) float largeCellSize;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic) UIImageView *backgroundImage;
@property (nonatomic) SearchFilterBar* sfb;
@property (nonatomic) UIView *bottomBarView;
@property (nonatomic) LoadingView *loadingView;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) EditPhotoStreamViewController *editPhotoStreamViewController;
//@property (nonatomic) UICollectionView *peopleGrid;

// For bottom bar things
@property (nonatomic) BOOL isExisting;

@property (nonatomic) BOOL isSelectionMode;

// Multipurpose buttons
@property (nonatomic) UIButton *btnDeleteCancel;
@property (nonatomic) UIButton *btnSave;
@property (nonatomic) NSMutableArray* names;

// Changing grid size from scrolling
@property (nonatomic) BOOL didLayout;

-(void) pressSave;

-(void) error:(NSString*)message;

-(void) removeImages:(NSMutableArray*)imgArray;

-(void) editMainTap;
-(void) getAlbumData;

@end
