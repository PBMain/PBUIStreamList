//
//  SettingsItem.h
//  PBPodUIStreamList
//
//  Created by Michael Liptuga on 1/24/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SettingsType) {
    Feedback = 0,
    Review,
    TermsConditions,
    PrivacyPolicy,
    Notifications,
    LoudNotes,
    OptinAllPhotos,
    ContactUs,
    NetworkConnectivity,
    ReportActivity,
    EmailSupport
};

@interface SettingsItem : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) SettingsType type;

+ (instancetype) createWithType : (SettingsType) type;



@end

NS_ASSUME_NONNULL_END
