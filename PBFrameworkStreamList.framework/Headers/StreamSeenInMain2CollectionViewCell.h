//
//  StreamSeenInMain2CollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 16/02/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StreamSeenInMain2CollectionViewCell : UICollectionViewCell

@property (nonatomic) IBOutlet UIImageView* imgBack;
@property (nonatomic) IBOutlet UIImageView* imgMain;
@property (nonatomic) IBOutlet UIImageView* imgDot;
@property (nonatomic) IBOutlet UIImageView* imgLogo1;
@property (nonatomic) IBOutlet UIImageView* imgLogo2;
@property (nonatomic) IBOutlet UIImageView* imgLogo3;

@property (nonatomic) IBOutlet UILabel* lblTitle;
@property (nonatomic) IBOutlet UILabel* lblName;
@property (nonatomic) IBOutlet UILabel* lblPhotos;
@property (nonatomic) IBOutlet UILabel* lblLogo1;
@property (nonatomic) IBOutlet UILabel* lblLogo2;
@property (nonatomic) IBOutlet UILabel* lblLogo3;

@property (nonatomic) IBOutlet UIView* viewBackgroundContainer;
@property (nonatomic) IBOutlet UIView* viewGradientContainer;



@end
