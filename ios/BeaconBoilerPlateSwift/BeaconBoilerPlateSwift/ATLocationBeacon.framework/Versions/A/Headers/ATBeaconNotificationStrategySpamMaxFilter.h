//
//  ATBeaconNotificationStrategySpamMaxFilter.h
//  ATLocationBeacon
//
//  Created by sarra srairi on 25/01/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
// 2.3.6

#import <Foundation/Foundation.h>
#import "ATBeaconNotificationStrategyDelegate.h"
@interface ATBeaconNotificationStrategySpamMaxFilter : NSObject  <ATBeaconNotificationStrategyDelegate> {

    int maxNumberNotifications;
    double timeBetweenNotification;
    int notificationNumber;
    double nextTimeToDisplayNotification;

}
@property (nonatomic) int maxNumberNotifications;
@property (nonatomic) double timeBetweenNotification;
- (instancetype)initWithNotificationMaxNumber:(int)_maxNumberNotification
                          timeBtwNotification:(long)_timeBetweenNotification;


@end
