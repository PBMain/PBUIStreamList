//
//  IdentifyPeopleContactController.h
//  PhotoButler
//
//  Created by Mirant Patel on 09/08/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol IdentifyPeopleContactControllerDelegate
- (void)manageTextInTextField;
- (void)setHeightByCount:(NSInteger)count;
@end

@interface IdentifyPeopleContactController : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic) id <IdentifyPeopleContactControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UIView *viewSegment;
@property (strong, nonatomic) IBOutlet UIButton *segmentContact;
@property (strong, nonatomic) IBOutlet UIButton *segmentExisting;
@property (strong, nonatomic) IBOutlet UITableView *tblList;
@property (strong, nonatomic) IBOutlet UILabel *lblC_NotFound;

-(void)textFromMainView:(NSString *)str;

@end
