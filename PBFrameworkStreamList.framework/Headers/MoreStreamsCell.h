#import <UIKit/UIKit.h>
#import <PBFrameworkUIStreamDetails/ContributingCoverBanner.h>

@protocol MoreStreamsCellDelegate <NSObject>

-(void) setFavoriteWithID:(NSString*)streamID isFavorite:(BOOL)isFavorite;
-(void) openAudience:(NSString *)streamID;
-(void) openAlbum:(NSDictionary*)stream;

@optional
-(void) openComment:(NSString*)streamId;

@end

@interface MoreStreamsCell : UICollectionViewCell

// Params
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamIDLoading;
@property (nonatomic) NSString *streamIDDisplaying;
@property (nonatomic) NSDictionary *stream;

@property (nonatomic) ContributingCoverBanner *contributionBanner;

// UI
@property (nonatomic) IBOutlet UIImageView *imgCover;
@property (nonatomic) IBOutlet UIImageView *imgGradient;
@property (nonatomic) IBOutlet UIImageView *imgFavorite;
@property (nonatomic) IBOutlet UIImageView *imgComments;
@property (nonatomic) IBOutlet UIImageView *imgAudience;
@property (nonatomic) IBOutlet UIImageView *imgHost;
@property (nonatomic) IBOutlet UIView *vGradientOverlay;
@property (nonatomic) IBOutlet UIView *vFavorite;
@property (nonatomic) IBOutlet UIView *vComments;
@property (nonatomic) IBOutlet UIView *vAudience;
@property (nonatomic) IBOutlet UILabel *lblFavorite;
@property (nonatomic) IBOutlet UILabel *lblComments;
@property (nonatomic) IBOutlet UILabel *lblAudience;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UILabel *lblHost;
@property (nonatomic) IBOutlet UILabel *lblContributorStatus;
@property (nonatomic) IBOutlet UIButton *btnLike;
@property (nonatomic) IBOutlet UIButton *btnComment;
@property (nonatomic) IBOutlet UIButton *btnAudience;
@property (nonatomic) IBOutlet UIButton *btnOpenStream;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *audienceIconWidth;
@property (nonatomic) IBOutlet NSDate *dateOfLastRedraw;

// Loading images when scrolling fast
@property (nonatomic) BOOL isLoadingImage;

// Buttons
//-(IBAction)pressFavorite:(id)sender;
//-(IBAction)pressComment:(id)sender;
//-(IBAction)pressAudience:(id)sender;

// UI
-(void) drawCell;
-(void) setPrivate;
-(void) setPublic;
-(void) loadCover;

// Callouts
@property (nonatomic, weak) id <MoreStreamsCellDelegate> delegate;

@end
