//
//  EditPhotoStreamViewController.h
//  PhotoButler
//
//  Created by Mirant on 09/12/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditPhotoStreamViewControllerDelegate <NSObject>

-(void)callDelegateMethodForEditStream;

@end

@interface EditPhotoStreamViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UIPickerViewDelegate,UIPickerViewDataSource>{
    IBOutlet UIView *viewForTimeManageTable;
    IBOutlet UIView *viewForLocationManageTable;
    IBOutlet UIImageView *imgForLocationManageTable;
    IBOutlet UIDatePicker *datepicker;
    IBOutlet UIPickerView *pickerView;
    
    IBOutlet UIImageView *imgForRoundLayerButton;
    IBOutlet UIImageView *imgForSquareLayerButton;
}

@property (nonatomic) id <EditPhotoStreamViewControllerDelegate> delegate;

@property (retain,nonatomic) IBOutlet UITableView *tblStartSchedule;
@property (retain,nonatomic) IBOutlet UITableView *tblTimeManage;
@property (retain,nonatomic) IBOutlet UITableView *tblLocationManage;

@property (retain,nonatomic) IBOutlet UIButton *btnForScheduleStart;

@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSDictionary *album;

-(IBAction)btnBack:(id)sender;

@end
