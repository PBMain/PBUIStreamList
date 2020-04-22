//
//  PeopleContainerColvCell.h
//  PhotoButler
//
//  Created by Mirant on 09/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PeopleContainerColvCell : UICollectionViewCell
@property (retain,nonatomic) IBOutlet UIImageView *imgMain;
@property (retain,nonatomic) IBOutlet UIImageView *imgBackground;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblDescription;
@property (retain,nonatomic) IBOutlet UIButton *btnAction;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintImgMainWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintImgMainHeight;

-(IBAction)pressStartStream:(id)sender;

@end
