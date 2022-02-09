//
//  EditProfileLogoCellCollectionViewCell.h
//  PBPodUIStreamList
//
//  Created by Nikita Khodzhaiev on 15.09.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EditProfileLabelCell : UICollectionViewCell

+ (id) cellNib;
+ (NSString*) cellId;

@property (nonatomic, weak) IBOutlet UIImageView *iconImageView;
@property (nonatomic, weak) IBOutlet UILabel *label;

- (void) updateUI;

@end

NS_ASSUME_NONNULL_END
