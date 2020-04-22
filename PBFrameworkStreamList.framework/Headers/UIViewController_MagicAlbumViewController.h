#import <UIKit/UIKit.h>
#import "UIView_ExistingMagicAlbumsGrid.h"

#import <PBFrameworkUIImageCarousel/LoadingView.h>

@interface MagicAlbumViewController : UIViewController {
    
}

@property (nonatomic) IBOutlet UIImageView *imgWand;
@property (nonatomic) IBOutlet UIView *loadingView;
@property (nonatomic) IBOutlet UIButton *btnCreate;
@property (nonatomic) ExistingMagicAlbumsGrid *existingGrid;
@property (nonatomic) BOOL didLoad;

-(IBAction)pressCreate:(id)sender;
-(void)showMagicAlbums;



@end
