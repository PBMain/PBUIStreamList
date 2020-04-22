#ifndef UIViewController_AllowDataUploads_h
#define UIViewController_AllowDataUploads_h

#import <UIKit/UIKit.h>

@interface UIViewController_AllowDataUploads : UIViewController{
    IBOutlet UILabel *lblInst;
    IBOutlet UIImageView *imgMobile;
    
    IBOutlet UIImageView *imgConfetti;
}

@property (nonatomic) IBOutlet UIButton *btnAllowWifi;
@property (nonatomic) IBOutlet UIButton *btnAllowData;
@property (nonatomic) NSTimer *checkWifiTimer;
@property (nonatomic) IBOutlet UIView *viewProgress;

@end



#endif /* UIViewController_AllowDataUploads_h */
