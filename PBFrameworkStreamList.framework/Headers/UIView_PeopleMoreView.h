#import <UIKit/UIKit.h>
#import "PhotoContainerView_PeopleContainerView.h"

#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@import Photos;

@class MainViewController;

@interface PeopleMoreView : PhotoContainerView {
    
}

@property (nonatomic) NSMutableArray *arrayImages;
@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) float cellSize;
@property (nonatomic) NSString *personId;
@property (nonatomic) IBOutlet UIView *topBarView;
@property (nonatomic) IBOutlet UIView *containerView;
@property (nonatomic) IBOutlet UIButton *backButton;

@property (nonatomic) UIView *identifyMoreHeader;

@property (nonatomic) PeopleContainerView *viewPeopleContainer;

-(IBAction)pressBack:(id)sender;
-(void) getPersonInformation;

@end
