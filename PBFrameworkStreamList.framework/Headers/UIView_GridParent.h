#import <UIKit/UIKit.h>
#import "UIView_SearchFilterBar.h"
@import Photos;

@protocol SearchGridDelegate
- (void)methodForEnableDisableSearchNow:(BOOL)isEnable;
@end

@interface GridParent : UIView <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout> {
    NSMutableAttributedString *attributedStringForPass;
}

@property (nonatomic) id <SearchGridDelegate> delegate;

@property (nonatomic) NSString *gridType;

@property (strong) NSMutableArray *items;
@property (strong) NSMutableArray *unfilteredItems;
@property (nonatomic) UICollectionView *grid;

@property (strong) NSString *reuseString;
@property (strong) NSString *typedFilter;
@property (strong) NSMutableArray *personFilters;
@property (strong) NSMutableArray *locationFilters;
@property (strong) NSMutableArray *occasionFilters;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) float cellSize;
@property (nonatomic) SearchFilterBar* sfb;
@property (nonatomic) UIViewController *svcDelegate;
@property (strong) NSString *dateTo;
@property (strong) NSString *dateFrom;

-(instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void) setNameFilter:(NSString*) nameFilter;
-(void) addPersonFilter:(NSString*) personFilter;
-(void) removePersonFilter:(NSString*) personFilter;
-(void) selectAll;
-(void) selectNone;

-(void) refreshTheData;

@end
