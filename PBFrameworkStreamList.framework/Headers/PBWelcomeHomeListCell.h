#import <UIKit/UIKit.h>
#import "PBWelcomeSeparatorView.h"

@interface PBWelcomeHomeListCell: UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UIImageView *mainImageView;
@property (nonatomic, weak) IBOutlet UIImageView *arrowImageView;
@property (nonatomic, weak) IBOutlet PBWelcomeSeparatorView *separatorView;


@end
