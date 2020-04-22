#import <UIKit/UIKit.h>

@interface ImageRounded : UIImageView {
    float roundValue;
}
@property (nonatomic) CAGradientLayer *gradient;

// When used from interface building, UIImageView is instantiated with initWithCoder
-(instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void) removeOverlay;
-(void) setLocationText:(NSString*)city state:(NSString*)state;
@end
