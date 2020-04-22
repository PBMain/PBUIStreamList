//
//  NewTabBarView.h
//  PhotoButler
//
//  Created by Mirant on 20/06/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NewTabBarViewProtocol <NSObject>

- (void)homePressed;
- (void)privatePressed;
- (void)publicPressed;

@end


@interface NewTabBarView : UIView

@property (nonatomic,retain) IBOutlet UIView *viewNewTabbarHome;
@property (nonatomic,retain) IBOutlet UIView *viewNewTabbarPrivate;
@property (nonatomic,retain) IBOutlet UIView *viewNewTabbarPublic;
@property (nonatomic,retain) IBOutlet UIImageView *imageViewUnderLineForNewTab;
@property (nonatomic,retain) IBOutlet UIButton *buttonHome;
@property (nonatomic,retain) IBOutlet UIButton *buttonPrivate;
@property (nonatomic,retain) IBOutlet UIButton *buttonPublic;

@property (nonatomic,retain) NSString *str_NewTabActive;
@property (nonatomic, weak) id<NewTabBarViewProtocol> delegate;

-(IBAction)buttonHome:(id)sender;
-(IBAction)buttonPrivate:(id)sender;
-(IBAction)buttonPublic:(id)sender;
@end
