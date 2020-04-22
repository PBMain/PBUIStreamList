#import <UIKit/UIKit.h>

@protocol MoreStreamsSearchCellDelegate
-(void) searchBy:(NSString *)searchText;
@end

@interface MoreStreamsSearchCell : UICollectionViewCell <UITextFieldDelegate>

// UI
@property (nonatomic) IBOutlet UITextField *txtEntry;
@property (nonatomic) IBOutlet UIView *viewBorder;

// Callouts
@property (nonatomic, weak) id <MoreStreamsSearchCellDelegate> delegate;

// Text Field
-(void)didEnterText;
-(IBAction)didEndText:(id)sender;

@end

