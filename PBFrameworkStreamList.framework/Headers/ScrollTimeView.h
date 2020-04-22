//
//  ScrollTimeView.h
//  PhotoButler
//
//  Created by Mirant on 23/03/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScrollTimeView : UIView

@property (nonatomic) IBOutlet UIImageView *imgDot;
@property (nonatomic) IBOutlet UIImageView *imgSecondHand;

@property (nonatomic) IBOutlet UIView *viewTimeContainer;
@property (nonatomic) IBOutlet UILabel *lblTime;
@property (nonatomic) IBOutlet UILabel *lblMonth;

-(void)setTime:(NSString *)timeManage;
-(void)setMonth:(NSString *)monthManage;
-(void)setAngleForContentSizeOfView:(CGSize)sizeContent currentContentOffSetOfView:(CGPoint)contentOffSet heightOfView : (float) height;
@end
