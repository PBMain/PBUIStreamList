//
//  ContactPeopleIdentifyViewController.h
//  PhotoButler
//
//  Created by Mirant on 08/11/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol ContactPeopleIdentifyViewControllerDelegate
- (void)setArrayData:(NSMutableArray *)arraySelected;
@end

@interface ContactPeopleIdentifyViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>

@property (nonatomic) id <ContactPeopleIdentifyViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITableView *tblContact;
@property (nonatomic) NSTimer *loadingTimer;
@property (nonatomic) BOOL hasPermission;
@property (strong, nonatomic) NSMutableDictionary *hashContact;

@property (nonatomic) int keyboardSpace;

@property (strong, nonatomic) IBOutlet UILabel *lblTitleMain;
@property (strong, nonatomic) IBOutlet UILabel *lblForNotFoundInst;

@property (strong, nonatomic) IBOutlet UIButton *btnCancel;

@property (weak, nonatomic) IBOutlet UIView *viewNavigationBar;
@property (weak, nonatomic) IBOutlet UIView *viewForContactAccess;
@property (weak, nonatomic) IBOutlet UIView *viewForCollectionView;

@property (weak, nonatomic) IBOutlet UITextField *txtForSearch;

@property (weak, nonatomic) IBOutlet UIImageView *imgForSearch;

@property (nonatomic) NSMutableDictionary *customContact;

@end
