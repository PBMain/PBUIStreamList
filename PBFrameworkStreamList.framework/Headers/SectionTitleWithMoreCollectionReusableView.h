//
//  SectionTitleWithMoreCollectionReusableView.h
//  PhotoButler
//
//  Created by Philippe Belley on 7/6/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SectionTitleWithMoreCollectionReusableView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UILabel *sectionTitleLbl;
@property (weak, nonatomic) IBOutlet UIButton *moreBtn;
@property (weak, nonatomic) IBOutlet UIView *gradientView;
@property (strong, nonatomic) IBOutletCollection(NSLayoutConstraint) NSArray *margins;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conMoreWidth;

-(void) setMarginWidth: (CGFloat) marginWidth;
-(void) setSectionTitle: (NSString*) sectionTitle andMore: (BOOL) show;
@end
