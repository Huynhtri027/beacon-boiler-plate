//
//  AdtagBeaconManager.h
//  CtbeaconManagerLib
//
//  Created by Sarra Srairi on 30/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import "ATBeaconRangeConsumer.h"
#import "ATBeaconRegisterNotificationDelegate.h"
#import "ATPhoneModeDelegate.h"
#import "ATBeaconNotificationConsumer.h"
#import "ATBeaconNotificationRangeConsumer.h"
#import "ATBeaconBleLocationStatus.h"
#import "ATBeaconNotificationStrategyDelegate.h"
#import "NSUserDefaults.h"
/**
 *  ATBeaconManager 
 *  allows you to register your delegate for the ranging / notification / BleLocation
 */
@interface ATBeaconManager : NSObject{
    ATBeaconRangeConsumer *beaconRangeConsumer;
    id<ATBeaconRegisterNotificationDelegate> beaconNotificationConsumer;
    NSCache *cacheBeacon;
    ATLogManager *logManager;
    ATBeaconBleLocationStatus * adTagBeaconBleLocationStatus;
    NSArray *lastBeaconInformationsForAlert;
    NSString *beaconUUIDString;
    ATBeaconNotificationChain *beaconNotificationchain;
    }

@property (strong, nonatomic) id<ATBeaconRegisterNotificationDelegate> beaconNotificationConsumer;
/**
 *  Get the singleton insatance
 *
 *  @return ATBeaconManger object
 */
+ (ATBeaconManager *)sharedInstance;


/**
 *  Initialize the ATBeaconManager with the specific property
 *
 *  @param beaconUUIDString the beacon's UUID
 *
 *  @return ATBeaconManger object
 */
+ (id) initInstanceUUIDStringIdentifier:(NSString *)beaconUUIDString
                   notificationStrategy:(id<ATBeaconNotificationStrategyDelegate> )_strategyNotification;


/**
 *  Register the delegate for AdTagRange Delegate with the object that will consume this delegate
 *
 *  @param object your delegate object
 */
-(void)registerAdtagRangeDelegate: (id<ATRangeDelegate>) object;
/**
 *  Register the delegate for Beacon Notification Delegate with the object that will consume this delegate
 *
 *  @param object your delegate object
 */
-(void)registerBeaconNotificionDelgate: (id) object;
/**
 *  Register the delegate for Beacon bluetooth & location Delegate with the object that will consume this delegate
 *
 *  @param object your delegate object
 */
-(void)registerAdtagBeaconBleLocationDelegate: (id)object;
/**
 *  If your app does not use ATBeaconAppDelegate, call this method when your app is going the foreground to notify the SDK about it
 */
-(void)onBackgroundState;
/**
 *  If your app does not use ATBeaconAppDelegate, call this method when your app is going the foreground to notify the SDK about it
 */
-(void)onForegroundState;

/**
 *  Permits to send an alert log to the Adtag Platform.
 *  An alert log must be send when application is on foreground, each time you display an information from a beaconContent
 *
 *  @param beaconContents array of beaconContent display to the user
 */
-(void)sendAlertLogs:(NSArray *)beaconContents;

/**
 *  Permits to send an alert log to the Adtag Platform.
 *  An alert log must be send when application is on foreground, each time you display an information from a beaconContent
 *
 *  @param beaconContent the beaconContent which uses to display the alert to the user
 */
-(void)sendAlertLog:(ATBeaconContent *)beaconContent;

/**
 *  Permits to send a redirect log.
 *  A redirect log must be generated when displaying the main information page about the beacon from a beacon notification, beacon alert or beacon action.
 *  @param beaconContent beacon content / all the information about beacon such as UUID major, minor, poi , acess
 *  @param redirectType  the type of the redirect. It could be : ATBeaconRedirectTypeAlert,ATBeaconRedirectTypeWebView, ATBeaconRedirectTypeNotification
 *  @param from          descripte the current controller
 */

-(void)sendRedictLog:(ATBeaconContent *)beaconContent
                redirectType:(ATBeaconRedirectType)redirectType
                from: (NSString *) from;
/**
 * Clean memory cache
 */
-(void) cleanCache;
/**
 *  This return the beacon information, when a user is getting a notification
 *
 *  @return ATBeaconContent
 */
-(ATBeaconContent *) getNotificationBeaconContent;

/**
 * Normally your app is notified about notification creation when an zone entry is detected.
 * If you activate this option, your app is notified about creating a notification when a new beacon is detected using the ranging method.
 * Warning : This could dry the user battery.
 * Warning : You need to activate the location background mode capabilities to get it works.
 */
-(ATBeaconManager *)activateRangingForNotification;

@end
