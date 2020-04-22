//
//  StartStreamOptions.h
//  PhotoButler
//
//  Created by Philippe Belley on 8/10/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol StartStreamOptionsDelegate <NSObject>
- (void)openNewStream:(UIView*)caller;
- (void)openCodeEntry:(UIView*)caller;
- (void)cancelStream:(UIView*)caller;
@end

@interface StartStreamOptions : UIView

@property (weak, nonatomic) id<StartStreamOptionsDelegate> delegate;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *collectionImages;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *collectionImageBGs;
@property (weak, nonatomic) IBOutlet UIView *optionsContainer;
@property (weak, nonatomic) IBOutlet UIView *cancelContainer;

@property (weak, nonatomic) IBOutlet UIButton *btnCreate;
@property (weak, nonatomic) IBOutlet UIButton *btnJoin;

@property (weak, nonatomic) IBOutlet UIImageView *createImageView;
@property (weak, nonatomic) IBOutlet UIImageView *joinImageView;

- (IBAction)createNewStreamPressed:(UIButton *)sender;
- (IBAction)joinExistingStreamPressed:(UIButton *)sender;
- (IBAction)cancelPressed:(UIButton *)sender;

@end
