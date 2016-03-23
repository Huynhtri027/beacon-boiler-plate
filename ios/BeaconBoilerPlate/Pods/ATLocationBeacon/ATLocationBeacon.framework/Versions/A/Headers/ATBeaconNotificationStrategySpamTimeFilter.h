//
//  ATBeaconNotificationStrategySpamTimeFilter.h
//  Pods
//
//  Created by sarra srairi on 19/01/2016.
//
// 2.3.6
#import "NSUserDefaults.h"
#import <Foundation/Foundation.h>
#import "ATBeaconNotificationStrategyDelegate.h"

/**
 * Filter type based on time Spam
 */
// seconde
@interface ATBeaconNotificationStrategySpamTimeFilter : NSObject <ATBeaconNotificationStrategyDelegate> {
 
    double minTimeBetweenTwoNotifications;
    double minTimeBeforeCreatingNotificationWhenAppEntersInBackground;
    double timeToCreateNotificationAfterAppEntersInBackground, timeToCreateNextNotification;
}

@property (nonatomic) double minTimeBetweenTwoNotifications;
@property (nonatomic) double minTimeBeforeCreatingNotificationWhenAppEntersInBackground;
@property (nonatomic) double timeToCreateNotificationAfterAppEntersInBackground;
@property (nonatomic) double timeToCreateNextNotification;

/**
 * The time spam _minTimeBeforeCreatingNotificationWhenAppEntersInBackground and _minTimeBetweenTwoNotifications will define when application will allow user to display notification
 */
- (id)initWithMinTimeBeforeCreatingNotificationWhenAppEnterInBackground:(int)_minTimeBeforeCreatingNotificationWhenAppEntersInBackground
                                          minTimeBetweenTwoNotification:(int)_minTimeBetweenTwoNotifications;
@end
