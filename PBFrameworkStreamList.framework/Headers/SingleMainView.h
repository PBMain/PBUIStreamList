#import <UIKit/UIKit.h>
#import "StartStreamOptions.h"
#import "SingleMainEmptyState.h"

@class TrackingImports;

@interface SingleMainView : UIViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StartStreamOptionsDelegate>

@property (nonatomic) IBOutlet UIButton *btnAddStream;
@property (nonatomic) IBOutlet UIButton *btnHamburgerMenu;
@property (nonatomic) IBOutlet UIButton *btnNotifications;

@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UIImageView *imgOneButtonMenu;

@property (nonatomic) IBOutlet UIView *vAboveSafe;
@property (nonatomic) IBOutlet UIView *vNavigation;
@property (nonatomic) IBOutlet UIView *vPoweredByPB;
@property (nonatomic, weak) IBOutlet UIView *vOneButtonContainer;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintPoweredByPBHeight;

// Loading view container
@property (nonatomic) IBOutlet UIView *vLoading;

// Keep track of the initial layout, as it messes with the pull-down refresh
@property (nonatomic) BOOL hasDoneInitialLayout;
@property (nonatomic) NSLock *lockDragRefresh;
@property (nonatomic) BOOL dragRefreshAvailable;

// CollectionView
@property (nonatomic) IBOutlet UICollectionView *cvStreams;
// Button for menu
@property (nonatomic, weak) IBOutlet UIImageView *imgOneButton;
@property (nonatomic, weak) IBOutlet UIView *viewOneButtonCustomColor;
@property (nonatomic, weak) IBOutlet UIImageView *imgOneButtonIcon;
// The number of streams to show (with a MORE button below, optionally)
@property (nonatomic) int numberStreamsToShow;
@property (nonatomic) NSMutableArray *arrayStreams;

// Starting a stream / joining with code
@property (nonatomic) StartStreamOptions *startStreamOptions;

@property (nonatomic) NSTimer *timerCheckUniversalLink;

// Parks
@property (nonatomic) NSString *folderID;
@property (nonatomic) NSDictionary *folder;
@property (nonatomic) NSMutableDictionary *coverUrlCache;
@property (nonatomic) NSMutableDictionary *coverUrlUpdatedLocallyRecently;

// Empty state
@property (nonatomic) SingleMainEmptyStateView *vEmptyState;

@property (nonatomic) BOOL isUsingHeroUpdatedCell;
@property (nonatomic) int peopleInvited;
@property (nonatomic) int peopleViewed;

// For users of the SDK
@property (nonatomic) TrackingImports *tracker;
-(void) setupForStreamListSDKUsage:(NSString*)facebookID;
@property (nonatomic) BOOL backIsLocked;
@property (nonatomic) BOOL dismissIsLocked;

@end
