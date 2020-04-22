//
//  TimelineDetailCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 25/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineDetailCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imgMain;

// Loading images in a smarter way
@property (nonatomic) BOOL isLoadingImage;

@end
