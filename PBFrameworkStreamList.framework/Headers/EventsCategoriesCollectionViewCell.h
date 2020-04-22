//
//  EventsCategoriesCollectionViewCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 2/23/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EventsCategoriesCellDelegate
-(void) tapEvent:(NSString *)eventID;
@end

@interface EventsCategoriesCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblDesc;
@property (weak, nonatomic) IBOutlet UICollectionView *eventsCollectionView;
@property (weak, nonatomic) IBOutlet UIView *inviteCodeView;
@property (nonatomic) NSArray *cellData;
@property (weak, nonatomic) IBOutlet UIView *viewContents;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraintCollectionView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraintTitle;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraintSubtitle;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topSpaceConstraintTitle;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topSpaceConstraintSubtitle;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topSpaceConstraintCollectionView;

@property (nonatomic, weak) id <EventsCategoriesCellDelegate> delegate;

-(void) showEvents;
-(void) hideEvents;
-(void) hideInviteCode;
-(void) showInviteCode;
@end
