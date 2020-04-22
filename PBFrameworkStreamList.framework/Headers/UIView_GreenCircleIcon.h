#import <UIKit/UIKit.h>

@interface GreenCircleIcon : UIView {
    
}

@property (nonatomic) UIImageView *theImageView;

-(void) setImage:(UIImage*)img;
-(void) setImageColor:(UIColor*)color;
-(void) setImageSize:(CGSize)size;

@end
