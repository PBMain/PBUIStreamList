#import <UIKit/UIKit.h>
#import "MoreFilterView.h"
#import "MoreStreamsCell.h"
#import "MoreStreamsSearchCell.h"
#import "StartDateSortButton.h"

#import <PBFrameworkUIStreamDetails/PhotoAlbumViewController.h>

@protocol MoreStreamsVCDelegate
-(void) openComment:(NSString *)streamID;
-(void) setFavoriteWithID:(NSString*)streamID isFavorite:(BOOL)isFavorite;
-(void) openAudience:(NSString *)streamID;
-(void) openAlbum:(NSDictionary*)streamID;

// Forwarding from PhotoAlbum
-(void)addViewPhotoController:(id)person fromStream : (NSString *)album;
-(void)addNewPersonView:(id)person;
-(void)addExistingPersonView:(id)person;
@end

@interface MoreStreamsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, MoreFilterViewDelegate, MoreStreamsCellDelegate, PhotoAlbumViewControllerDelegate, StartDateSortButtonDelegate, MoreStreamsSearchCellDelegate> {
    
}

@property (nonatomic) IBOutlet UIButton *btnBack;
@property (nonatomic) IBOutlet UIButton *btnFilter;
@property (nonatomic) IBOutlet UICollectionView *cvStreams;

@property (weak, nonatomic) IBOutlet UILabel *lblMoreTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblMoreSubTitle;
@property (weak, nonatomic) NSString *moreTitleString;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) BOOL isUpcoming;
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL shouldFocusSearchOnLoad;
@property (nonatomic) NSString *type;
@property (nonatomic) NSString *filter;
@property (nonatomic) NSString *searchText;
@property (nonatomic) MoreFilterView *vMoreFilter;

// streams could be filtered from allStreams, or be a copy
@property (nonatomic) NSArray *streams;
// allStreams is the unfiltered array of all the streams
@property (nonatomic) NSArray *allStreams;
// Sorter for the streams listed
@property (nonatomic) BOOL sortAscending;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressFilter:(id)sender;

// Init calls
+(MoreStreamsViewController*) initAsAllStreams;
+(MoreStreamsViewController*) initAsLivePublic;
+(MoreStreamsViewController*) initAsLivePrivate;
+(MoreStreamsViewController*) initAsUpcomingPublic;
+(MoreStreamsViewController*) initAsUpcomingPrivate;
+(MoreStreamsViewController*) initAsPastPublic;
+(MoreStreamsViewController*) initAsPastPrivate;
+(MoreStreamsViewController*) initAsHomeLive;
+(MoreStreamsViewController*) initAsHomeUpcoming;

// Open album
-(void)openStreamWithID:(NSNotification *)note;

// Remove a stream from the view
-(void) removeStreamWithID:(NSString*)streamID;

// Delegate from sort button
-(void) useSort:(BOOL)ascending;
-(void) searchBy:(NSString *)searchText;

// Temp
@property (nonatomic, weak) id <MoreStreamsVCDelegate> delegate;
-(void) setStreamDataSource:(NSArray*)streamDataSource;

// Loading and drag refresh
@property (nonatomic) BOOL didLayout;
@property (nonatomic) LoadingView *viewLoading;
@property (atomic) NSRecursiveLock *dragRefreshLock;
@property (nonatomic) BOOL dragRefreshAvailable;

// Scrolling fast image loading
@property (nonatomic) CGPoint lastOffset;
@property (nonatomic) NSTimeInterval lastOffsetCapture;
@property (nonatomic) BOOL isProcessingSlowScrolling;
@property (nonatomic) BOOL isLoadingImages;
@property (atomic) NSLock *lockLoadVisibleCells;
@property (atomic) NSRecursiveLock *slowScrollingLock;

@end
