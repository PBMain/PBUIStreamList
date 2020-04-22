#import <UIKit/UIKit.h>
@class SearchGrid;
@class GridParent;

@protocol SearchFilterBarDelegate

@end

@interface SearchFilterBar : UIView <UITextFieldDelegate>

@property (nonatomic) id <SearchFilterBarDelegate> delegate;

@property (nonatomic) IBOutlet UITextField *textFilter;
@property (nonatomic) IBOutlet UILabel *lblTop;
@property (nonatomic) IBOutlet UILabel *lblBottom;
@property (nonatomic) IBOutlet UILabel *lblInstructions;
@property (nonatomic) IBOutlet UIProgressView *progressBar;

@property (nonatomic) GridParent *searchGridDelegate;
@property (nonatomic) NSArray *arrayPeople;
@property (nonatomic) NSArray *arrayPlaces;
@property (nonatomic) NSArray *arrayOccasions;
@property (nonatomic) NSString *dateFrom;
@property (nonatomic) NSString *dateTo;

@property (nonatomic) BOOL isSummary;
@property (nonatomic) NSMutableAttributedString *colorizedString;

-(IBAction)changeFilter:(id)sender;

-(void) setPeopleNames:(NSArray*)names;
-(void) setLocationsNames:(NSArray*)names;
-(void) setOccasionsNames:(NSArray*)names;
-(void) setNewDateFrom:(NSString*)date;
-(void) setNewDateTo:(NSString*)date;
-(void) updateSearchString;

-(void) hideFilterBar;

-(void) setTextHeight;
-(float) getTextHeight;

-(float) getCorrectFrameWidth;
-(float) getTextFilterWidth;
-(float) getCellHeight;

@end
