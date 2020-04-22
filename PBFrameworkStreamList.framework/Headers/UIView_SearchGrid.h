#import <UIKit/UIKit.h>
#import "UIView_SearchFilterBar.h"
#import "UIView_GridParent.h"
@import Photos;

@interface SearchGrid : GridParent <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,SearchFilterBarDelegate> {
    
}

@property (nonatomic) NSString *gridType;

@property (strong) NSMutableArray *unfilteredItems;
@property (nonatomic) UICollectionView *grid;

@property (strong) NSMutableArray *personFilters;
@property (strong) NSMutableArray *locationFilters;
@property (strong) NSMutableArray *occasionFilters;
@property (nonatomic) UIViewController* svcDelegate;
@property (nonatomic) UIDatePicker *datePicker;
@property (nonatomic) UIView *datePickerView;

-(instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void) setNameFilter:(NSString*) nameFilter;
-(void) addPersonFilter:(NSString*) personFilter;
-(void) removePersonFilter:(NSString*) personFilter;
-(void) selectAll;
-(void) selectNone;

-(void) refreshTheData;

@end