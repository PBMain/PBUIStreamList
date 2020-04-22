@import Photos;

@interface PhotoChangeListener : NSObject <PHPhotoLibraryChangeObserver>

@property (nonatomic) BOOL isRegisteredPhotoChanges;

+(instancetype) sharedDelegate;
-(void) registerForPhotoChanges;
-(void) unregister;

@end
