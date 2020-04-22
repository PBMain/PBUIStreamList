#import <objc/runtime.h>
#import <PBFrameworkUILibraries/UIAlertController+Window.h>

@interface UIAlertController (Window)

- (void)show;
- (void)show:(BOOL)animated;

@end

@interface UIAlertController (Private)

@property (nonatomic, strong) UIWindow *alertWindow;

@end
