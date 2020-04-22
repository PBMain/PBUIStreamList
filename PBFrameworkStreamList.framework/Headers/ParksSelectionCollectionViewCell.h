//
//  ParksSelectionCollectionViewCell.h
//  PhotoButler
//
//  Created by Michael Liptuga on 25.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ParksSelectionCollectionViewCell : UICollectionViewCell

+ (CGSize) cellSize;

+ (NSString*) cellId;

+ (id) cellNib;

- (void) configure : (id) object;

@end

NS_ASSUME_NONNULL_END
