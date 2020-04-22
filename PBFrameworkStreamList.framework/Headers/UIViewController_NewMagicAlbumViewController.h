#import <UIKit/UIKit.h>
#import "UIView_GridParent.h"
#import "UIViewController_SearchViewController.h"

@interface NewMagicAlbumViewController : SearchViewController

@property (nonatomic) IBOutlet UIBarButtonItem *buttonBack;
@property (nonatomic) IBOutlet UIToolbar *toolBar;
@property (nonatomic) IBOutlet UIView *gradientView;
@property (nonatomic) IBOutlet UIImageView *backgroundView;

// Title Bar
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSearchText;

// Selection bar
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSelectAll;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSelectNone;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSearchNow;

// non clickables
@property (nonatomic) IBOutlet UIBarButtonItem *buttonPeople;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonLocations;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonOccasions;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonTimes;

// Storing search info
@property (nonatomic) NSMutableArray *personFilters;
@property (nonatomic) NSMutableArray *occasionFilters;
@property (nonatomic) NSMutableArray *locationFilters;
@property (nonatomic) NSString *dateFrom;
@property (nonatomic) NSString *dateTo;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isExisting;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSMutableDictionary *dataStore;

// Grid View Controls
@property (nonatomic) GridParent *searchGrid;

-(IBAction)pressPeople:(id)sender;
-(IBAction)pressLocations:(id)sender;
-(IBAction)pressOccasions:(id)sender;
-(IBAction)pressTimes:(id)sender;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSelectAll:(id)sender;
-(IBAction)pressSelectNone:(id)sender;
-(IBAction)pressSearchNow:(id)sender;

-(void) addLoadingView;
-(void) removeLoadingView;

@end
