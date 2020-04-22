@import UIKit;
#import "SingleMainView.h"

@interface PBStreamList : NSObject {}

+(void) getStreamList:(void (^)(SingleMainView *vc))successBlock error:(void (^)(NSString* error))errorBlock;

@end

