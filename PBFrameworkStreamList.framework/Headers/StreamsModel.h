//
//  StreamsModel.h
//  PhotoButler
//
//  Created by Philippe Belley on 6/27/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, StreamsTabs) {
    FreshStart,
    HomeTab,
    PublicTab,
    PrivateTab,
    // TOTAL "Tabs"
    TotalTabs
};

@interface StreamsModel : NSObject

@property (nonatomic) NSMutableArray *freshStartData;
@property (nonatomic) NSMutableArray *homeTabData;
@property (nonatomic) NSMutableArray *publicTabData;
@property (nonatomic) NSMutableArray *privateTabData;


+(instancetype) sharedDelegate;
+(void) refreshDBWithService: (StreamsTabs) tab;

@end
