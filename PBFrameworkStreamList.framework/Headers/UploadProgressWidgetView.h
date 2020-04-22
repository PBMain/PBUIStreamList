#import <UIKit/UIKit.h>
#import "UploadProgressWidget.h"

@interface UploadProgressWidgetView : UIView

@property (nonatomic) UIView *viewFromNib;

-(void)timerTickUpdate;

@end
