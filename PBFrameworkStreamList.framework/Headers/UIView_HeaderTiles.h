#import <UIKit/UIKit.h>
@import Photos;

@interface HeaderTiles : UIView

@property (nonatomic) NSMutableArray *allImageViews;
@property (nonatomic) UIImageView *image1;
@property (nonatomic) UIImageView *image2;
@property (nonatomic) UIImageView *image3;
@property (nonatomic) UIImageView *image4;

@property (nonatomic) UIView *gradientView;
@property (nonatomic) UIView *overlayView;
@property (nonatomic) CAGradientLayer *gradient;
@property (nonatomic) CAGradientLayer *overlay;


-(void) getPersonTiles:(NSString*) personId friendId:friendId;
-(void) getLocationTiles:(NSString*) locationId;
-(void) getOccasionTiles:(NSString*) occasionId;
-(void) getMagicAlbumTiles:(NSString*) magicAlbumId;

-(void) clearTiles;

@end
