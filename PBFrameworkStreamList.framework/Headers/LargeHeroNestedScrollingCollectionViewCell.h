//
//  LargeHeroNestedScrollingCollectionViewCell
//  PhotoButler
//
//  Created by Philippe Belley on 8/7/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NestedMoreClickProtocol.h"
@interface LargeHeroNestedScrollingCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (weak, nonatomic) IBOutlet UICollectionView *nestedCollectionView;
@property (nonatomic) NSMutableArray *arrayLiveStreams;
@property (nonatomic) UIViewController *homeVC;
@property (nonatomic, weak) id <NestedMoreClickProtocol> clickMoreDelegate;

-(void) updateCellContent;

@end
