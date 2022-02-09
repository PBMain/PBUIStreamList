//
//  EditProfileLogoCellCollectionViewCell.h
//  PBPodUIStreamList
//
//  Created by Nikita Khodzhaiev on 15.09.2020.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EditProfileLogoCellCollectionViewCell : UICollectionViewCell

+ (NSString *) cellId;
+ (id) cellNib;

@property (nonatomic, weak) IBOutlet UIImageView *profileImageView;
@property (nonatomic, weak) IBOutlet UIImageView *editImageView;
@property (nonatomic, weak) IBOutlet UIView *editView;
@property (nonatomic, weak) IBOutlet UITextField *firstNameTextField;
@property (nonatomic, weak) IBOutlet UITextField *lastNameTextField;
@property (nonatomic, weak) IBOutlet UILabel *firstNameLabel;
@property (nonatomic, weak) IBOutlet UILabel *lastNameLabel;

@property (nonatomic, copy) void (^changeLogo)(void);

- (void) updateUI;

@end

NS_ASSUME_NONNULL_END
