#import <UIKit/UIKit.h>

@interface PhotosTabBarController : UITabBarController <UIBarPositioningDelegate> {
    UIImageView *bgBackLine;
    UIImage *imageForLast;
}

@property (nonatomic, retain) UIButton *btnMagicAlbum;
@property (nonatomic, retain) UIButton *btnPeople;
@property (nonatomic, retain) UIButton *btnLocation;
@property (nonatomic, retain) UIButton *btnOccasion;
@property (nonatomic, retain) UIButton *btnTime;

@property (nonatomic) IBOutlet UIButton *buttonContinue;
@property (nonatomic) IBOutlet UIButton *buttonCreateMagicAlbum;
@property (nonatomic) int selectedTag;
@property (nonatomic,assign) BOOL isFavourite;

-(void)changeTheTabbarIndex:(int)index;

-(void) addCustomElements;
-(void)buttonClicked:(UIButton *)sender;

@end
