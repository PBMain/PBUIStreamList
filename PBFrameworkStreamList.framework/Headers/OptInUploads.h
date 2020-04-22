#import <UIKit/UIKit.h>

@interface OptInUploads : UIView

// First view
@property (weak, nonatomic) IBOutlet UIButton *btnAgree;
@property (weak, nonatomic) IBOutlet UIButton *btnDisagree;
@property (weak, nonatomic) IBOutlet UIView *viewTopSection;
@property (weak, nonatomic) IBOutlet UIView *viewBottomSection;

-(IBAction)pressAgree:(id)sender;
-(IBAction)pressDisagree:(id)sender;

// Second view
@property (weak, nonatomic) IBOutlet UIView *viewSecondScreen;
@property (weak, nonatomic) IBOutlet UIButton *btnDismiss;
@property (weak, nonatomic) IBOutlet UIImageView *imgBackground;

-(IBAction)pressDismiss:(id)sender;

@end
