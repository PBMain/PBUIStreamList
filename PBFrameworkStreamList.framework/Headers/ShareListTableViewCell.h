//
//  ShareListTableViewCell.h
//  PhotoButler
//
//  Created by Mirant on 14/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShareListTableViewCell : UITableViewCell
@property (retain,nonatomic) IBOutlet UILabel *lblName;
@property (retain,nonatomic) IBOutlet UILabel *lblSubText;
@property (retain,nonatomic) IBOutlet UILabel *lblSubTextName;
@property (retain,nonatomic) IBOutlet UIImageView *imgUser;
@end
