//
//  UIView+Extension.h
//  PhotoButler
//
//  Created by Michael Liptuga on 26.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Extension)

- (void) applyShadowWith : (UIColor*) color
                  radius : (CGFloat) radius
            shadowRadius : (CGFloat) shadowRadius
        showRoundCorners : (BOOL) showRoundCorners;

-(void) roundView;

-(void) roundViewWithRadius : (CGFloat) radius;

-(void) addGradientMask : (NSArray*) colors
             startPoint : (CGPoint) startPoint
               endPoint : (CGPoint) endPoint;


@end

NS_ASSUME_NONNULL_END
