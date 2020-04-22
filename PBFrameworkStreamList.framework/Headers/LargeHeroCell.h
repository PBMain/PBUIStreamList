//
//  LargeHeroCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 7/13/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <PBFrameworkUIStreamDetails/ContributingCoverBanner.h>


@interface LargeHeroCell : UICollectionViewCell

// Params
@property (retain,nonatomic) NSString *streamID;
@property (retain,nonatomic) NSDictionary *stream;

// UI
@property (weak, nonatomic) IBOutlet UILabel *lblHost;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UIImageView *imgFavorite;
@property (weak, nonatomic) IBOutlet UILabel *lblFavorite;
@property (weak, nonatomic) IBOutlet UILabel *lblComment;
@property (weak, nonatomic) IBOutlet UILabel *lblAudience;
@property (weak, nonatomic) IBOutlet UILabel *lblContributorStatus;
@property (weak, nonatomic) IBOutlet UIImageView *imgHost;
@property (weak, nonatomic) IBOutlet UIImageView *imgCoverImage;
@property (weak, nonatomic) IBOutlet UIImageView *imgGradient;
@property (weak, nonatomic) IBOutlet UIView *viewFavorites;
@property (weak, nonatomic) IBOutlet UIView *viewComments;
@property (weak, nonatomic) IBOutlet UIView *viewAudience;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *pillShapes;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *darkCircles;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *imgColDefaultColors;
@property (weak, nonatomic) IBOutlet UIImageView *imgAudience;
@property (nonatomic) BOOL isFading;
@property (nonatomic) NSTimer *timerFade;
@property (nonatomic, assign) BOOL isAnimating;

@property (nonatomic) ContributingCoverBanner *contributionBanner;

// Button targets
- (IBAction)pressFavorite:(id)sender;
- (IBAction)pressComment:(id)sender;
- (IBAction)pressAudience:(id)sender;

-(void) setAssets;
-(void) setPrivate;
-(void) setPublic;
-(void) displayCover;

@end
