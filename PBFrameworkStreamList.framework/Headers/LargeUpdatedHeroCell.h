//
//  LargeHeroCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 7/13/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PBFrameworkUIStreamDetails/ContributingCoverBanner.h>

@interface LargeUpdatedHeroCell : UICollectionViewCell

// Params
@property (retain,nonatomic) NSString *streamID;
@property (retain,nonatomic) NSDictionary *stream;

@property (nonatomic, weak) IBOutlet UILabel *lblTitle;
@property (nonatomic, weak) IBOutlet UILabel *lblSharedLabel;
@property (nonatomic, weak) IBOutlet UILabel *lblPeopleParticipatingLabel;

@property (weak, nonatomic) IBOutlet UIImageView *imgCoverImage;
@property (weak, nonatomic) IBOutlet UIImageView *imgGradient;
@property (weak, nonatomic) IBOutlet UILabel *lblContributorStatus;
@property (weak, nonatomic) IBOutlet UIView *vSeparatorDot;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcCoverFromBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcSharedLabelLeft;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lcSeparatorDotWidth;

@property (weak, nonatomic) IBOutlet UIView *viewCoverContainer;
@property (nonatomic) NSString *coverCacheIdentifier;

@property (nonatomic) int peopleViewed;
@property (nonatomic) int peopleInvited;

@property (nonatomic) ContributingCoverBanner *contributionBanner;

-(void) setAssets;
-(void) setDisplay;

@end
