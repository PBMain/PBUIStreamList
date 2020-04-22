//
//  MoreCellNestedScrollingCollectionViewCell
//  PhotoButler
//
//  Created by Philippe Belley on 8/7/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MoreStreamsCell.h"
#import "NestedMoreClickProtocol.h"

@interface MoreCellNestedScrollingCollectionViewCell : UICollectionViewCell <MoreStreamsCellDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *nestedCollectionView;
@property (nonatomic) NSMutableArray *arrayData;
@property (nonatomic, assign) BOOL wantPrivate;
@property (nonatomic) NSString *updateNotificationName;
@property (nonatomic, weak) id <NestedMoreClickProtocol> clickMoreDelegate;

-(void) updateCellContent;

@end
