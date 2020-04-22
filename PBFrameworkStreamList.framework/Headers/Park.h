//
//  Park.h
//  PhotoButler
//
//  Created by Michael Liptuga on 27.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BrandColors.h"

NS_ASSUME_NONNULL_BEGIN

@interface Park : NSObject

@property (nonatomic, strong) BrandColors *brandColors;
@property (nonatomic, strong) NSNumber *folderId;
@property (nonatomic, strong) NSString *logo;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSString *tile;
@property (nonatomic, strong) NSString *themeId;

@property (nonatomic, strong) NSString *folderIdStr;

+ (Park*) createWith : (NSDictionary*) dictionary;
-(NSDictionary*) dictionary;

@end

NS_ASSUME_NONNULL_END
