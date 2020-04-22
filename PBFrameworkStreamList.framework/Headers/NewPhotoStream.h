#import <UIKit/UIKit.h>
#import "HostContributorOptInView.h"

@interface NewPhotoStream : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource, HostContributionOptInDelegate> {
    IBOutlet UIView *viewForTimeManageTable;
    IBOutlet UIView *viewForLocationManageTable;
    IBOutlet UIImageView *imgForLocationManageTable;
    IBOutlet UIDatePicker *datepicker;
    IBOutlet UIPickerView *pickerView;
}

@property (retain,nonatomic) IBOutlet UITableView *tblStartSchedule;
@property (retain,nonatomic) IBOutlet UITableView *tblTimeManage;
@property (retain,nonatomic) IBOutlet UITableView *tblLocationManage;

@property (retain,nonatomic) IBOutlet UIButton *btnForScheduleStart;

@property (retain,nonatomic) IBOutlet UIView *viewForNavigation;
@property (retain,nonatomic) IBOutlet UIView *viewForSafeArea;
@property (retain,nonatomic) IBOutlet UILabel *lblNavTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblDirectionsLive;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (assign,nonatomic) BOOL isInstant;
@property (assign,nonatomic) BOOL isScheduledCheck;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *folderID;
@property (nonatomic) NSDictionary *response;
@property (nonatomic) NSString *inviteCode;
@property (nonatomic) BOOL isManual;
@property (nonatomic) BOOL isUpcoming;




-(IBAction)btnBack:(id)sender;

@end
