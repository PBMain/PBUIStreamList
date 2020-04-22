#import <UIKit/UIKit.h>
#import "UIView_SearchFilterBar.h"
#import "UIView_GridParent.h"
@import Photos;

@class NewMagicAlbumViewController;

@interface MagicAlbumGrid : GridParent <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout> {
    
}

@property (nonatomic) NSString *gridType;

@property (strong) NSMutableArray *unfilteredItems;
@property (strong) NSMutableArray *items;
@property (strong) NSMutableArray *people;
@property (strong) NSMutableArray *locations;
@property (strong) NSMutableArray *occasions;
@property (nonatomic) UICollectionView *grid;
@property (nonatomic) UIDatePicker *datePicker;
@property (nonatomic) UIView *datePickerView;

@property (strong) NSString *reuseString;
@property (strong) NSString *typedFilter;
@property (strong) NSMutableArray *personFilters;
@property (strong) NSMutableArray *locationFilters;
@property (strong) NSMutableArray *occasionFilters;
@property (strong) NSString *dateTo;
@property (strong) NSString *dateFrom;
@property (nonatomic) NewMagicAlbumViewController* svcDelegateNewType;

@property (nonatomic) BOOL isLoader;

-(instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void) setNameFilter:(NSString*) nameFilter;
-(void) addPersonFilter:(NSString*) personFilter;
-(void) removePersonFilter:(NSString*) personFilter;
-(void) selectAll;
-(void) selectNone;

-(void) refreshTheData;

@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) SearchFilterBar* sfb;

@end
