//
//  TutorialCollectionViewCell.h
//  PhotoButlerTutorial
//
//  Created by Mirant on 21/04/17.
//  Copyright © 2017 Mirant. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TutorialCollectionViewCell : UICollectionViewCell

@property (retain , nonatomic) IBOutlet UIImageView *imageView_Main;
@property (retain , nonatomic) IBOutlet UIImageView *imageView_Wave;
@property (retain , nonatomic) IBOutlet UIImageView *imageView_Icon;
@property (retain , nonatomic) IBOutlet UIImageView *imageView_Icon1;
@property (retain , nonatomic) IBOutlet UIImageView *imageView_Icon1BG;
@property (retain , nonatomic) IBOutlet UILabel *label_Description;

@end
