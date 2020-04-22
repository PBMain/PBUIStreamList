//
//  SelfieCropperViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 1/18/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TOCropViewController;
@protocol SelfieCropperEditDelegate <NSObject>
- (void)newProfileImage:(UIImage*)image withCrop:(CGRect)cropRect;
@end
@interface SelfieCropperViewController : UIViewController

@property (nonatomic, weak) id<SelfieCropperEditDelegate> editDelegate;
@property (nonatomic) UIImagePickerController *profilePicker;
@property (nonatomic) UIButton *profilePickerButton;
@property (nonatomic) UIImagePickerControllerSourceType sourceType;

@property (nonatomic) TOCropViewController *cropControllerForDelegate;
@property (nonatomic) UIImage *imageForDelegate;

@property (nonatomic) TOCropViewController *cropController;

-(void) showCamera:(id)sender;
-(void) showLibrary:(id)sender;
-(void) finishedUpload;

@end
