#import <UIKit/UIKit.h>

@protocol MoreFilterViewDelegate <NSObject>
- (void)setFilterType:(NSString*)filterType;
@end

@interface MoreFilterView : UIView {
    
}

@property (nonatomic, weak) id<MoreFilterViewDelegate> delegate;

@property (retain,nonatomic) IBOutletCollection(UIImageView) NSArray *arrImgChecks;
@property (retain,nonatomic) IBOutletCollection(UIButton) NSArray *arrBtns;
@property (retain,nonatomic) IBOutlet UIButton *btnAllStreams;
@property (retain,nonatomic) IBOutlet UIButton *btnHostedByYou;
@property (retain,nonatomic) IBOutlet UIButton *btnHostedByOthers;
@property (retain,nonatomic) IBOutlet UIButton *btnYourFavorites;
@property (retain,nonatomic) IBOutlet UIButton *btnCancel;
@property (retain,nonatomic) IBOutlet UIImageView *imgAllStreams;
@property (retain,nonatomic) IBOutlet UIImageView *imgHostedByYou;
@property (retain,nonatomic) IBOutlet UIImageView *imgHostedByOthers;
@property (retain,nonatomic) IBOutlet UIImageView *imgYourFavorites;
@property (retain,nonatomic) IBOutlet UIView *viewFilterButtonsContainer;
@property (retain,nonatomic) IBOutlet UIView *viewCancelButtonContainer;

-(IBAction)pressAllStreams:(id)sender;
-(IBAction)pressHostedByYou:(id)sender;
-(IBAction)pressHostedByOthers:(id)sender;
-(IBAction)pressYourFavorites:(id)sender;
-(IBAction)pressCancel:(id)sender;

@end
