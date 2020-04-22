#import <UIKit/UIKit.h>

@interface HomeTabIntroCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageHouseIcon;
@property (weak, nonatomic) IBOutlet UIView *vGreenFrame;

@property (weak, nonatomic) IBOutlet UILabel *lblPublic;
@property (weak, nonatomic) IBOutlet UILabel *lblPrivate;
@property (weak, nonatomic) IBOutlet UILabel *lblHome;

-(void) setPublic;
-(void) setPrivate;
-(void) setHome;

@end
