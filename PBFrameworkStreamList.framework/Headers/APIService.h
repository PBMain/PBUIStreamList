//
//  APIService.h
//  PhotoButler
//
//  Created by Michael Liptuga on 27.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APIService : NSObject

+ (APIService*) service;

+ (instancetype) alloc __attribute__((unavailable("alloc not available, call service instead")));
- (instancetype) init __attribute__((unavailable("init not available, call service instead")));
+ (instancetype) new __attribute__((unavailable("new not available, call service instead")));


- (void) loadParks: (NSString*) URLString
           success: (void (^)(id responseObject))success
           failure: (void (^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END
