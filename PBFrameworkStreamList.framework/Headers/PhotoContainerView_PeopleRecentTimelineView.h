#import <UIKit/UIKit.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>
@import Photos;

@interface PeopleRecentTimelineView : PhotoContainerView {
    
}

@property (nonatomic) NSTimer* loadingTimer;
@property (nonatomic) BOOL alreadyLoading;
@property (nonatomic) float cellSize;
@property (nonatomic) UIView* loadingView;
@property (nonatomic) NSMutableArray* gridDataSource;
@property (nonatomic) int gridDataTotalImages;
@property (nonatomic) NSMutableArray *arrayRecent;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) NSString *friendId;
@property (nonatomic) NSString *friendName;

@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UIView *viewContainer;
@property (nonatomic) IBOutlet UIImageView *backgroundView;

@property (nonatomic) NSMutableArray *arraySelected;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL isSelectionMode;
@property (nonatomic) BOOL isSetting;

-(IBAction)pressBack:(id)sender;
-(void) removeImages:(NSMutableArray*)imgArray;

@property (nonatomic) IBOutlet UIButton *btnShare;
-(IBAction)pressShare:(id)sender;

@end
