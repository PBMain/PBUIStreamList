//
//  TutorialViewController.h
//  PhotoButler
//
//  Created by Mirant on 20/04/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TutorialCompletionBlock)(void);

@interface TutorialViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,UIScrollViewDelegate>
@property (retain , nonatomic) IBOutlet UICollectionView *collectionView_Tutorial;
@property (retain , nonatomic) IBOutlet UIButton *button_Go;
@property (retain , nonatomic) IBOutlet UIPageControl *pagecontroller_Tutorial;
@property (nonatomic) TutorialCompletionBlock tutorialCompletion;
@end
