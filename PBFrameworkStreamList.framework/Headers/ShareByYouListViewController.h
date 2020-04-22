//
//  ShareByYouListViewController.h
//  PhotoButler
//
//  Created by Mirant on 14/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShareByYouListViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    IBOutlet UIImageView *imgConfetti;
    IBOutlet UIView *viewNavigation;
}

@property (retain,nonatomic) IBOutlet UITableView *tblListOfShare;

@property (retain,nonatomic) IBOutlet UILabel *lblTitleNav;

@property (retain,nonatomic) NSMutableArray *arraySharedPeople;

@end
