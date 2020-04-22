//
//  PBNavigationService.h
//  Pods
//
//  Created by Michael Liptuga on 1/18/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBNavigationService : NSObject

+ (instancetype) service;

+ (instancetype) alloc __attribute__((unavailable("alloc not available, call manager instead")));
- (instancetype) init __attribute__((unavailable("init not available, call manager instead")));
+ (instancetype) new __attribute__((unavailable("new not available, call manager instead")));

-(void) makeInitCallToServer: (void (^)(void)) completionBlock;

-(void) navigateBackToStreams;

-(BOOL) openLink: (NSURL*) url;

-(BOOL) navigateFromUniversalLinkWithUserActivity: (NSUserActivity*) userActivity;

-(void) navigateFromUniversalLinkStreamCreation;

@end

NS_ASSUME_NONNULL_END
