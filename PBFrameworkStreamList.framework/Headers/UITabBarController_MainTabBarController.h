#import <UIKit/UIKit.h>
#import "StartStreamOptions.h"

@interface MainTabBarController : UITabBarController <UITabBarDelegate, StartStreamOptionsDelegate>

@property (nonatomic) IBOutlet UITabBar *theTabBar;

@property (nonatomic) IBOutlet UIButton *buttonMainAdd;

-(instancetype)initWithCoder:(NSCoder *)aDecoder;
-(void)openNewStream:(UIView*)caller;

@end
