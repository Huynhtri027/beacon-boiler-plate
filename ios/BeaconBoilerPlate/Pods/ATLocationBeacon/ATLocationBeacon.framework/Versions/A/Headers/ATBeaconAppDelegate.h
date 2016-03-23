//
//  ATAppDelegate.h
//  Pods
//
//  Created by Stevens Olivier on 13/04/2015.
//
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATBeaconManager.h"
#import "ATBeaconNotificationDelegate.h"

/**
 * ATBeaconAppDelegate manages the configuration of the AppDelegate to detect beacon when application is on background
 */
@interface ATBeaconAppDelegate : UIResponder <CLLocationManagerDelegate>{
    ATBeaconManager *adtagBeaconManager;
    CLLocationManager *locationManager;
    BOOL versionLogDisplayTest ;
    id<ATBeaconNotificationStrategyDelegate> strategyNotification;
  
}
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) id<ATBeaconNotificationStrategyDelegate> strategyNotification;
/**
 *  Init the various parameter necessary to connect to the Adtag platform
 *
 *  @param urlType  AdTag Platfrom you would like to connect (Preprod, Prod)
 *  @param login    manages the authorization to connect to the Adtag platform
 *  @param password manages the authorization to connect to the Adtag platform
 *  @param company  company's name
 *  @param uuid     the specific and unique id for beacon
 */
- (void) initAdtagInstanceWithUrlType:(ATUrlType) urlType
                            userLogin:(NSString *)login
                         userPassword:(NSString *)password
                          userCompany:(NSString *)company
                           beaconUuid:(NSString *)uuid;
- (void)cleanAttribute;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)addNotificationSrategy:(id<ATBeaconNotificationStrategyDelegate>) _strategyNotification ; 
@end
