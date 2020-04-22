//
//  HelloViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 12/27/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HelloCollectionViewCell.h"


@interface HelloViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *viewShowMe;
@property (weak, nonatomic) IBOutlet UITextView *tvTermsAndPolicy;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conTextContainerTopMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conGetStartedBottomMargin;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conTitleRightMargin;
@property (weak, nonatomic) IBOutlet UIPageControl *pcCurrentPage;
@property (weak, nonatomic) IBOutlet UICollectionView *horizontalCollectionView;
@property (weak, nonatomic) IBOutlet UIButton *btnGetStarted;
@property (strong, nonatomic) NSTimer *timerForAutoscroll;
@property (weak, nonatomic) IBOutlet UIView *viewPoweredByPB;

-(IBAction)pressedChangePage:(UIPageControl*)sender;

@end
