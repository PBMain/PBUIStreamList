#import <UIKit/UIKit.h>
#import "UIView_GridParent.h"
#import "ViewController_SearchFilterResult.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>

@interface SearchViewController : UIViewController <SearchGridDelegate> {
    
}

@property (nonatomic) IBOutlet UIBarButtonItem *buttonBack;

// Selection bar
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSelectAll;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSelectNone;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonSearchNow;

// non clickables
@property (nonatomic) IBOutlet UIBarButtonItem *buttonPeople;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonLocations;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonOccasions;
@property (nonatomic) IBOutlet UIBarButtonItem *buttonTimes;

// Grid View Controls
@property (nonatomic) IBOutlet UIView *viewGridContainer;
@property (nonatomic) LoadingView *viewLoading;
@property (nonatomic) GridParent *searchGrid;

// Storing search info
@property (nonatomic) NSMutableArray *personFilters;
@property (nonatomic) NSMutableArray *occasionFilters;
@property (nonatomic) NSMutableArray *locationFilters;
@property (nonatomic) NSString *dateFrom;
@property (nonatomic) NSString *dateTo;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) NSMutableDictionary *dataStore;

-(IBAction)pressPeople:(id)sender;
-(IBAction)pressLocations:(id)sender;
-(IBAction)pressOccasions:(id)sender;
-(IBAction)pressTimes:(id)sender;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSelectAll:(id)sender;
-(IBAction)pressSelectNone:(id)sender;
-(IBAction)pressSearchNow:(id)sender;

-(void) getParamsFromGrid;
-(void) setParamsToGrid;

-(void) addLoadingView;
-(void) removeLoadingView;
-(void) showAlert:(NSString*)message;

-(void) loadGridData;
-(void) displayGridData:(NSMutableDictionary*)data;

-(void) goBack:(void (^)(void))completionBlock;

@end
