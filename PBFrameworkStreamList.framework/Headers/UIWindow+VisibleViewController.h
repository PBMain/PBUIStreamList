//
//  UIWindow+VisibleViewController.h
//  PBPodUIStreamList
//
//  Created by Michael Liptuga on 1/18/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (VisibleViewController)

+ (UIViewController*) rootViewController;

+ (UIViewController*) visibleViewController;

@end

NS_ASSUME_NONNULL_END
