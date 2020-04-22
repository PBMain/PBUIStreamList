//
//  UIView+CustomButtons.h
//  PhotoButler
//
//  Created by Michael Liptuga on 28.09.2018.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CustomButtons)

+ (UIView*) createCustomViewButton: (CGRect) frame
                          iconName: (NSString*) iconName
                        iconBundle: (NSBundle*)iconBundle
                              text: (NSString*) text
                       dividerLine: (BOOL) dividerLine;

@end

NS_ASSUME_NONNULL_END
