#import <UIKit/UIKit.h>

#import <PBFrameworkUIImageCarousel/LoadingView.h>
#import <PBFrameworkUIImageCarousel/UIView_PhotoContainerView.h>

@class PeopleContainerView;
@class PeopleMoreView;

@import Photos;

@interface PeopleClusterView : PhotoContainerView <UITextFieldDelegate> {
    
}

@property (nonatomic) NSMutableArray *arraySimilar;
@property (nonatomic) NSMutableArray *arrayClustered;
@property (nonatomic) NSMutableArray *arrayOthers;
@property (nonatomic) NSMutableArray *arrayRemoving;
@property (nonatomic) NSMutableArray *arrayAdding;

@property (nonatomic) NSMutableArray *arrayHidden;

@property (nonatomic) float cellSize;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL showNamedPeople;
@property (nonatomic) NSString *personId;
@property (nonatomic) NSString *friendId;
@property (nonatomic) IBOutlet UIView *vGridContainer;
@property (nonatomic) IBOutlet UIView *vTopBar;
@property (nonatomic) IBOutlet UIButton *btnNext;
@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UILabel *lblTitleManage;

@property (nonatomic) LoadingView *viewLoading;
@property (nonatomic) PeopleMoreView *viewPeopleMore;
@property (nonatomic) PeopleContainerView *viewPeopleContainer;

@property (nonatomic) id personCheck;

@property (nonatomic) BOOL shouldRevertStatusBar;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressNext:(id)sender;

@end
