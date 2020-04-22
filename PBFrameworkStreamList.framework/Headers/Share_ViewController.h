#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

#import <PBFrameworkUILibraries/iCarousel.h>
#import <PBFrameworkUIStreamDetails/ContactViewController.h>

@import Photos;
@interface Share_ViewController : UIViewController<iCarouselDataSource, iCarouselDelegate,ContactViewControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *lblScreenTitle;
@property (nonatomic) int countTemparay;

@property (weak, nonatomic) IBOutlet UIView *viewForSMSMessage;
@property (weak, nonatomic) IBOutlet UIView *viewForEmail;

@property (weak, nonatomic) IBOutlet UILabel *lblSMSDetail;
@property (weak, nonatomic) IBOutlet UIImageView *imageSMS;
@property (weak, nonatomic) IBOutlet UILabel *lblSMSTitle;

@property (weak, nonatomic) IBOutlet UILabel *lblEmailDetail;
@property (weak, nonatomic) IBOutlet UIImageView *imageEmail;
@property (weak, nonatomic) IBOutlet UILabel *lblEmailTitle;

@property (nonatomic, strong) IBOutlet iCarousel *carousel1;

@property (nonatomic) NSMutableArray* names;
@property (nonatomic) NSMutableArray* allImages;
@property (nonatomic) NSString* magicAlbumId;
@property (nonatomic) NSString* occasionId;
@property (nonatomic) NSString* occasionName;

@end
