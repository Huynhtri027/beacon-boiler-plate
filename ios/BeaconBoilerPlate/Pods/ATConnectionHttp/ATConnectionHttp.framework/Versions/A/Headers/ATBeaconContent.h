//
//  ModelPoiAcess.h
//  Pods
//
//  Created by Sarra Srairi on 09/03/2015.
//
//
#import <CoreLocation/CoreLocation.h>
#import <QuartzCore/QuartzCore.h>

#import "ATAccess.h"
#import "ATPoi.h"
#import "ATCampaign.h"
#import "ATAdtagContent.h"

FOUNDATION_EXPORT int const MAX_COUNT_PROXIMITY;
/**
 *  ATBeaconContent contains all the information about beacons
 */
@protocol ATBeaconContent @end
@interface ATBeaconContent : ATAdtagContent{
    /**
     *  gives beacon's the last proximity
     */
    CLProximity lastProximity;
    int countProximty;
    CLProximity lastActionProximity;
    BOOL isActionDone;
    NSString *key;
    
}
/**
 *  clbeacon proprety : contain the default beacon value such as rssi, minor , major , uuid
 */
@property (strong, nonatomic) CLBeacon<Ignore> *beacon;
/**
 * key to identify beacon fastly  
 */
@property (strong, nonatomic) NSString<Ignore> *key;
/**
 *  beacon uuid
 */
@property (strong, nonatomic) NSString *uuid;
/**
 *  beacon major
 */
@property (strong, nonatomic) NSString *major;
/**
 *  beacon minor
 */
@property (strong, nonatomic) NSString *minor;
/**
 *  @return the notification title registred in the server (AdTag Platform)
 */
-(NSString *) getNotificationTitle;
/**
 *  @return the notification Description registred in the server (AdTag Platform )
 */
-(NSString *) getNotificationDescription;
/**
 *  @return the alert title registred in the server (AdTag Platform )
 */
-(NSString *) getAlertTitle;
/**
 *  @return the alert description registred in the server (AdTag Platform )
 */
-(NSString *) getAlertDescription;
/**
 *  @return the action registred in the platfrom and will be executed
 */
-(NSString *) getAction;
/**
 *  @return the uri registred in the server (AdTag Platform)
 */
-(NSString *) getUri;
/**
 *  will update the lastproximity,the countProximty and check if the action status (isActionDone)
 *
 *  @param _beacon beacon with type CLbeacon
 */
-(void) updateBeacon:(CLBeacon *) _beacon;
/**
 *  generate key composed with uuid major minor for the notification key
 *
 *  @return generated key
 */
-(NSString *)generateKey;
/**
 *  put the IsActionDone to yes; reinsilise the value of lastproximty and the countproximity
 */
-(void) actionIsDone;
/**
 *  @return yes if the action could be done on the beacon
 */
-(BOOL)isReadyForAction;

@end
