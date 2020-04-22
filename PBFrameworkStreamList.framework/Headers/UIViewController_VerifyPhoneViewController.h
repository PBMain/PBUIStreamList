#import <UIKit/UIKit.h>

@interface VerifyPhoneViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (nonatomic) IBOutlet UIButton *buttonContinue;
@property (weak, nonatomic) IBOutlet UIView *viewContent;
@property (nonatomic) IBOutlet UIButton *buttonSendAnother;
@property (nonatomic) IBOutlet UIButton *buttonReEnterPhone;
@property (nonatomic) IBOutlet UITextField *fieldPhoneCode;
@property (strong, nonatomic) IBOutlet UILabel *lblInst1;
@property (nonatomic) IBOutlet UIImageView *imgButler;
@property (weak, nonatomic) IBOutlet UIImageView *imgID;
@property (weak, nonatomic) IBOutlet UIView *numberContainer;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *codeArray;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *codeBGArray;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conDistanceToTop;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *conSpaceForErrorMessage;
@property (weak, nonatomic) IBOutlet UIView *errorBG;
@property (weak, nonatomic) IBOutlet UIView *viewPoweredByPB;

@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;

@property (assign, nonatomic) NSInteger lastCodeCellFilled;
@property (assign, nonatomic, getter=isErrorShowing) BOOL errorShowing;
@property (assign, nonatomic, getter=isErrorAnimating) BOOL errorAnimating;

-(IBAction)pressContinue:(id)sender;
-(IBAction)pressSendAnother:(id)sender;
-(IBAction)pressReEnterPhone:(id)sender;

-(void) error:(NSString*)message;

@end
