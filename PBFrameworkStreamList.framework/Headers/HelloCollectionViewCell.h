//
//  HelloCollectionViewCell.h
//  PhotoButler
//
//  Created by Michael Liptuga on 12/14/18.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HelloCollectionViewCell : UICollectionViewCell

+ (NSString*) cellId;

+ (id) cellNib;

+ (CGSize) cellSize;

- (void) configureWithTitle : (NSString*) title
                   subtitle : (NSString*) subtitle;

@end

NS_ASSUME_NONNULL_END
