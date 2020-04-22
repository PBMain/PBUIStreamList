//
//  InstantCollectStreamCell.h
//  PhotoButler
//
//  Created by Mirant on 09/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstantCollectStreamCell : UICollectionViewCell
@property (retain,nonatomic) IBOutlet UIImageView *imgIcon;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubtitle;
@property (retain,nonatomic) IBOutlet UIButton *btnForStream;
@end
