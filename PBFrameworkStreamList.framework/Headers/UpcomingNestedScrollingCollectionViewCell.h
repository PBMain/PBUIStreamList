#import <UIKit/UIKit.h>
#import "NestedMoreClickProtocol.h"

@interface UpcomingNestedScrollingCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (weak, nonatomic) IBOutlet UICollectionView *nestedCollectionView;
@property (nonatomic) NSMutableArray *cellData;
@property (nonatomic) NSMutableArray *arrayUpcoming;
@property (nonatomic) UIViewController *homeVC;
@property (nonatomic, weak) id <NestedMoreClickProtocol> clickMoreDelegate;
-(void) updateCellContent;

@end
