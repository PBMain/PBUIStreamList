//
//  GnomeSplashLoadViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/1/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GnomeSplashLoadViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;
@property (weak, nonatomic) IBOutlet UIView *viewPoweredByPB;

+ (instancetype) createWithCompletion : (void (^)(BOOL isDataLoadingComplete)) success;

@end
