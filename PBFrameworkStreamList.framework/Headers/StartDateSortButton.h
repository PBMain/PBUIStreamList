#import <UIKit/UIKit.h>

@protocol StartDateSortButtonDelegate <NSObject>
-(void) useSort:(BOOL)ascending;
@end

@interface StartDateSortButton : UIView {
    
}

@property (nonatomic, weak) id<StartDateSortButtonDelegate> delegate;
@property (nonatomic) BOOL isAscending;

@property (retain,nonatomic) IBOutlet UIButton *btnSort;

-(IBAction)pressSort:(id)sender;

// Redraws the button
-(void) updateButton;

@end
