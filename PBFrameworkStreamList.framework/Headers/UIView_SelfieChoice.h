#import <UIKit/UIKit.h>

@interface SelfieChoice : UIView {
    
}

@property (nonatomic) IBOutlet UIButton *btnLibrary;
@property (nonatomic) IBOutlet UIButton *btnCamera;
@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIView *viewTop;
@property (nonatomic) IBOutlet UIView *viewBG;
@property (nonatomic) IBOutlet UIImageView *imgCamera;
@property (nonatomic) IBOutlet UIImageView *imgPhotos;
@property (nonatomic) id delegate;

-(IBAction)pressLibrary:(id)sender;
-(IBAction)pressCamera:(id)sender;
-(IBAction)pressCancel:(id)sender;

@end
