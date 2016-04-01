//
//  ATBeaconRegisterNotificationDelegate
//
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ATBeaconNotificationDelegate.h"
#import <ATConnectionHttp/ATConnectionHttp.h>
/**
 *To Switch Notification detection process
 */
@protocol ATBeaconRegisterNotificationDelegate <NSObject>


-(void) registerAdtagBeaconNotificationDelegate:(__autoreleasing id<ATBeaconNotificationDelegate>)_adtagBeaconNotificationDelegate;

-(ATBeaconContent *) beaconContentNotification;

-(void) configureLocationManager:(CLLocationManager *) locationManager_;

@end

