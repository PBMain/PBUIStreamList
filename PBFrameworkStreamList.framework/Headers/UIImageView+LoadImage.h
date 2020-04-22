//
//  UIImageView+LoadImage.h
//  PhotoButler
//
//  Created by Michael Liptuga on 28.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (LoadImage)

- (void) loadPhotoWithURLStr : (NSString*) urlStr
                     success : (void (^)(UIImage *image))success
                     failure : (void (^)(NSError *error))failure;

- (void) loadLogoWithURLStr : (NSString*) urlStr
                    success : (void (^)(UIImage *image))success
                    failure : (void (^)(NSError *error))failure;


@end

NS_ASSUME_NONNULL_END
