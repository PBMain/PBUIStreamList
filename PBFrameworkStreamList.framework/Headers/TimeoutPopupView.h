#import <UIKit/UIKit.h>

@interface TimeoutPopupView : UIView {
    
}
@property (retain,nonatomic) IBOutlet UIView *viewLoadMain;
@property (retain,nonatomic) IBOutlet UIImageView *imgAppIcon;
@property (retain,nonatomic) IBOutlet UIView *viewLoading;
@property (retain,nonatomic) IBOutlet UIButton *btnTryAgain;

-(IBAction)pressTryAgain:(id)sender;
-(void) resetButton;

@end
