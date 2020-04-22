@import UserNotifications;

typedef void (^simpleBlock)(void);

@interface LocalNotificationManager : NSObject <UNUserNotificationCenterDelegate>

// Keys are the requestID, value is the request itself
@property (nonatomic) NSMutableDictionary *notificationRequests;
@property (nonatomic) NSMutableArray *pushRequestIDs;
// We'll need to check this later to see if it has already triggered
@property (nonatomic) NSMutableDictionary *triggerFireDates;
@property (nonatomic) NSDate *lastCheckOtherPhotos;
@property (nonatomic) NSMutableDictionary *uploadedAssetData;
@property (nonatomic) NSMutableDictionary *uploadedAssetStreamData;
@property (nonatomic) NSRecursiveLock *lockUploadedAssetData;
@property (nonatomic) NSDate *badgeLastCheckDate;
@property (nonatomic) NSMutableDictionary *uploadedByOthers;

+(instancetype) sharedDelegate;
+(BOOL) isReadyForNotification;
+(void) setNotificationSent;
+(void) removeAllQueuedNotes;

// General Send
+(void) sendPushNotification;
+(void) sendTestPushNotification;
// Specifically send upload note
+(BOOL) sendPhotoUploadNote;
+(BOOL) sendStreamEndedNote;

// Notification for nearby public stream
+(void) notifyPublicStreamNearby:(NSString*)streamID streamName:(NSString*)streamName;
// Information Storage and Retrieval
+(int) infoUploadsSinceLastLogin;
+(void) infoSetUploadsSinceLastLogin:(int)num;
+(int) infoUploadsSinceLastNote;
+(void) infoSetUploadsSinceLastNote:(int)num;
// Records that an asset with creationDate has been uploaded
+(void) addUpload: (NSDate*)creationDate key:(NSString*)key;
// Clears the records (call this when opening the app)
+(void) clearUploads;

@end
