//
//  AdtagBeaconNotification.h
//  Pods
//
//  Created by Sarra Srairi on 26/03/2015.
//
//

#import <Foundation/Foundation.h>
#import <ATAnalytics/ATAnalytics.h>
#import "ATBeaconConsumer.h"
#import "ATBeaconNotificationDelegate.h"
#import "ATBeaconRegisterNotificationDelegate.h"
#import "ATLocalNotificationManager.h"
#import "ATBeaconNotificationStrategySpamRegionFilter.h"
#import "ATBeaconNotificationChain.h"
#import "ATBeaconFullInformation.h"
@interface ATBeaconNotificationConsumer : ATBeaconConsumer <ATBeaconRegisterNotificationDelegate>{
    NSObject *adtagBeaconNotificationDelegateLock;
    id<ATBeaconNotificationDelegate> adtagBeaconNotificationDelegate;
    CLBeaconRegion *notificationRegion ;
    ATBeaconContent *beaconContentNotification;
    UIApplication *app;
    UIBackgroundTaskIdentifier bgTask;
    BOOL isFirstTime;
    BOOL isRanging;
    BOOL isNotificationShown;
    BOOL isOnForgroundMode;
    BOOL isBgTaskStarted;
     
    int countNoBeacon;
    NSTimer *timerForBgTask;
    NSString *notificationRegionIdentifier;
    ATLocalNotificationManager *localNotificationManager;
    ATBeaconContent * lastBeaconContentDetected;
    NSArray *beaconsRanged;
    char  test ;
    NSString *testStrin;
    NSUserDefaults *notificationRegionStored;
    ATBeaconFullInformation *beaconFullInforamtion;
    ATBeaconNotificationChain *strategyChain;
    // === Version 2.4.0 ====
    // NSUserDefaults *beaconInformationStored;
}
@property (strong, nonatomic)   CLBeaconRegion *notificationRegion ;
@property (strong, nonatomic)   NSString *notificationRegionIdentifier;
-(void) registerAdtagBeaconNotificationDelegate:(id<ATBeaconNotificationDelegate>) adtagBeaconNotificationDelegate;
-(void) startRangingInBackgroundTask:(BOOL) deleteNotification;
    
@end
