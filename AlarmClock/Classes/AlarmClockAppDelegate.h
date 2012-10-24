//
//  AlarmClockAppDelegate.h
//  AlarmClock
//
//  Created by oudongjia on 12-10-23.
//  Copyright 2012 z. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AlarmClockViewController;

@interface AlarmClockAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    AlarmClockViewController *viewController;
	
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AlarmClockViewController *viewController;
@property (nonatomic, assign) id musicDelegate;

- (void)postLocalNotification:(NSString *)clockID isFirst:(BOOL)flag;

@end

