#import <UIKit/UIKit.h>

@interface AppLogsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *vAboveNav;
@property (weak, nonatomic) IBOutlet UIView *vNavigation;

@property (weak, nonatomic) IBOutlet UITextView *txtLogs;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UIButton *btnReload;
@property (weak, nonatomic) IBOutlet UIButton *btnClear;
@property (weak, nonatomic) IBOutlet UIButton *btnCopy;
@property (weak, nonatomic) IBOutlet UIButton *btnPausePlay;

@property (nonatomic) NSDate *dateCurrentLog;
@property (nonatomic) int daysAgoToFetch;
@property (nonatomic) NSTimer *timerUpdate;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressReload:(id)sender;
-(IBAction)pressClear:(id)sender;
-(IBAction)pressCopy:(id)sender;
-(IBAction)pressPausePlay:(id)sender;

@end
