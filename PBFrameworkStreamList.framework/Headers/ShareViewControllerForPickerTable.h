//
//  ShareViewControllerForPickerTable.h
//  PhotoButler
//
//  Created by Mirant Patel on 05/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ShareViewControllerForPickerTableDelegate

@end


@interface ShareViewControllerForPickerTable : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    IBOutlet UIImageView *imgBackground;
}

@property (nonatomic) id <ShareViewControllerForPickerTableDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITableView *tblList;

@end
