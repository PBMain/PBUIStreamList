#import <UIKit/UIKit.h>
#import "UIView_OccasionDetails.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@interface OccasionYear : PhotoContainerView {
    
}

@property (nonatomic) NSMutableArray *arrayTop;
@property (nonatomic) NSMutableArray *arrayBottom;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *year;
@property (nonatomic) NSString *title;
@property (nonatomic) BOOL isTopExpanded;
@property (nonatomic) BOOL isBottomExpanded;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet UIView *vTopBar;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UILabel *lblTitle;

@property (nonatomic) LoadingView *viewLoading;

-(void) getOccasionInformation;
-(IBAction)pressBack:(id)sender;

@property (nonatomic) IBOutlet UIButton *btnShare;
-(IBAction)pressShare:(id)sender;

@end
