//
//  UpcomingCell.h
//  PhotoButler
//
//  Created by Mirant on 21/06/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UpcomingCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIView *viewDate;
@property (retain,nonatomic) IBOutlet UIView *viewGradient;

@property (retain,nonatomic) IBOutlet UIImageView *imgProfileBackground;
@property (retain,nonatomic) IBOutlet UIImageView *imgWorldIcon;

@property (retain,nonatomic) IBOutlet UILabel *lblMonth;
@property (retain,nonatomic) IBOutlet UILabel *lblDay;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblSubTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblTimeRange;

@property (retain,nonatomic) NSString *streamID;
@property (retain,nonatomic) NSDictionary *stream;

-(void)fadeAnimation;
-(void) setPrivate;
-(void) setPublic;

-(void) drawCell;

@end
