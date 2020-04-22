#import <UIKit/UIKit.h>
#import "UIView_OccasionDetails.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@interface PeopleOccasionsView : PhotoContainerView {
    
}

@property (nonatomic) NSMutableArray *arrayMonths;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *title;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet UIView *vTopBar;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UILabel *lblTitle;

@property (nonatomic) LoadingView *viewLoading;

@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL isSelectionMode;
@property (nonatomic) BOOL isSetting;

-(void) getOccasionInformation;
-(IBAction)pressBack:(id)sender;

@property (nonatomic) IBOutlet UIButton *btnShare;
-(IBAction)pressShare:(id)sender;

@end
