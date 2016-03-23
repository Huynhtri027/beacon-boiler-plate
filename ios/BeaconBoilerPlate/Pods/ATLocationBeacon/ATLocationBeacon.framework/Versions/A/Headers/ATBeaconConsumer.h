//
//  AdtagBeaconConsumer.h
//  CtbeaconManagerLib
//
//  Created by Stevens Olivier on 03/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//



#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATBeaconRangeDelegate.h"
#import "ATPhoneModeDelegate.h"
#import "ATBeaconUtils.h"
#import "ATBeaconUtils.h"
#import <ATAnalytics/ATAnalytics.h>
#import "ATBeaconNotificationStrategyDelegate.h"


@interface ATBeaconConsumer : NSObject <CLLocationManagerDelegate, ATPhoneModeDelegate>{
    BOOL isActive;
    BOOL isLocationStarted;
    BOOL requireAlwaysAuthorization;
    BOOL downloadContentInProgress;
    ATRangeFeedStatus feedStatus;
    CLBeaconRegion *uuidRegion;
    NSString *uuidRegionIdentifier;
    ATConnectionBeacon *connectionBeacon;
    NSCache *beaconCache;
    NSMutableDictionary *beaconInformationDataInProgress;
    NSArray *lastBeaconDetected ;
    ATLogManager *logManager;
    int rangeCount ;
 
 
}

@property(nonatomic,assign)   BOOL isActive, isLocationStarted, requireAlwaysAuthorization;
@property(nonatomic,assign)   ATRangeFeedStatus feedStatus;
@property (strong, nonatomic) NSString *uuidRegionIdentifier;
@property (strong, nonatomic) CLBeaconRegion *uuidRegion;
@property (strong, nonatomic) CLLocationManager *locationManager;
 
- (id)initStringUUID:(NSString *)_uuid
         beaconCache:(NSCache *) _beaconCache
notificationStrategy:(id<ATBeaconNotificationStrategyDelegate>) strategyNotification;

- (id)initStringUUID:(NSString *)_uuid
         beaconCache:(NSCache *) _beaconCache; 

-(void)startLocationManager;
-(void)didRangeBeacons:(NSArray *)_beacons
    BeaconInformations:(NSArray *)_beaconInformations
     InformationStatus:(ATRangeInformationStatus)informationStatus
            feedStatus:(ATRangeFeedStatus)feedstatus
              InRegion:(CLRegion *)region;

-(void) onForeground;
-(void) onBackground;

 
@end
