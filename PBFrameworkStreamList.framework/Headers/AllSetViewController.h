//
//  TakePhotoViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 1/17/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AllSetViewController : UIViewController
@property (weak, nonatomic) NSString *personId;

@property (weak, nonatomic) IBOutlet UIImage *imgMainProfile;

@property (weak, nonatomic) IBOutlet UIImageView *imgBackImage;
@property (weak, nonatomic) IBOutlet UIImageView *imgViewMainProfile;

@property (weak, nonatomic) IBOutlet UILabel *lblMain;
@property (weak, nonatomic) IBOutlet UILabel *lblData;

@end
