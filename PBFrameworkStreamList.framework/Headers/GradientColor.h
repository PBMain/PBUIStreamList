//
//  GradientColor.h
//  PhotoButler
//
//  Created by Michael Liptuga on 02.10.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GradientColor : NSObject

@property (nonatomic, strong) NSString* color1;
@property (nonatomic, strong) NSString* color2;
@property (nonatomic, strong) NSNumber* degrees;

+ (GradientColor*) createWith : (NSDictionary*) dictionary;

@end

NS_ASSUME_NONNULL_END
