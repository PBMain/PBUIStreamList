#import <UIKit/UIKit.h>
#import <PBFrameworkUILibraries/KAProgressLabel.h>


@interface UploadProgressWidget : UIView

@property (nonatomic) IBOutlet KAProgressLabel *circleView;
@property (nonatomic) IBOutlet UIView *circleImageView;
@property (nonatomic) IBOutlet UILabel *lblScanningLabel;
@property (nonatomic) IBOutlet UILabel *lblCompletePercent;
@property (nonatomic) IBOutlet UIImageView *imgWand;
@property (nonatomic) NSTimer *updateTimer;

@property (nonatomic) UIView *viewFromNib;

-(void)timerTickUpdate;

@end
