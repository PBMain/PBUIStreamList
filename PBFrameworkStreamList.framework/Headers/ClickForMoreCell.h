
#import <UIKit/UIKit.h>

@interface ClickForMoreCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgBackground;
@property (weak, nonatomic) IBOutlet UIImageView *imgGradient;
@property (weak, nonatomic) IBOutlet UILabel *lblDisplay;
@property (weak, nonatomic) IBOutlet UIButton *btnClickArea;

-(void)upcomingSettings;
-(void)largeHeroSettings: (NSDictionary*) stream;
-(void)squareSettings: (NSDictionary*) stream;
@end
