//
//  ProfileSourceSelectionViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 2/1/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileSourceSelectionViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblUserName;
@property (weak, nonatomic) IBOutlet UIButton *btnImport;
@property (weak, nonatomic) IBOutlet UIButton *btnTakePicture;
@property (weak, nonatomic) IBOutlet UIImageView *imgIcon;

@end
