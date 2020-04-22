//
//  BrandColors.h
//  PhotoButler
//
//  Created by Michael Liptuga on 02.10.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GradientColor.h"

NS_ASSUME_NONNULL_BEGIN

@interface BrandColors : NSObject

@property (nonatomic, strong) NSString* colorCTABackgroundHEX;
@property (nonatomic, strong) NSString* colorMainHEX;
@property (nonatomic, strong) NSString* colorNavBarBGHEX;

@property (nonatomic, strong) GradientColor* colorCTABackgroundImage;
@property (nonatomic, strong) GradientColor* colorNavBarBGImage;

+ (BrandColors*) createWith : (NSDictionary*) dictionary;

@end

NS_ASSUME_NONNULL_END
