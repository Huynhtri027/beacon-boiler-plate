//
//  AdtagBeaconRange.h
//  CtbeaconManagerLib
//
//  Created by Stevens Olivier on 03/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATBeaconConsumer.h"
#import "ATBeaconNotificationDelegate.h"
#import "ATBeaconRegisterNotificationDelegate.h"
#import "ATLocalNotificationManager.h"


typedef enum{
    ATBeaconRegionExit,
    ATBeaconRegionEnter
}ATBeaconRegion;

@interface ATBeaconNotificationRangeConsumer : ATBeaconConsumer <ATBeaconRegisterNotificationDelegate>{
    NSObject *adtagBeaconNotificationDelegateLock;
    id<ATBeaconNotificationDelegate> adtagBeaconNotificationDelegate;
    NSArray *referenceBeacons;
    ATBeaconContent *beaconNotificationContent;
    bool isLocationActive;
    ATLocalNotificationManager *localNotificationManager;
}


@end
