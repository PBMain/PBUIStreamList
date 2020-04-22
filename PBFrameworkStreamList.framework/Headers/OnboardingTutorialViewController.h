#import <UIKit/UIKit.h>

@interface OnboardingTutorialViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (retain, nonatomic) IBOutlet UICollectionView *cvTutorial;
@property (retain, nonatomic) IBOutlet UIPageControl *pcTutorial;
@property (retain, nonatomic) UIViewController *nextVC;
@property (weak, nonatomic) IBOutlet UIView *viewPoweredByPB;

@end
