//
//  AdTagBeaconRangeDelegate.h
//  CtbeaconManagerLib
//
//  Created by Sarra Srairi on 01/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
/**
 *  Type to define beacon information status.
 *  @enum ATRangeInformationStatusComplete : we get all the information about beacons around.
 *  @enum ATRangeInformationStatusEmpty : no information founded.
 *  @enum ATRangeInformationStatusPartial : not all the information are retreived.
 */
typedef enum{
    ATRangeInformationStatusComplete,
    ATRangeInformationStatusEmpty,
    ATRangeInformationStatusPartial
}ATRangeInformationStatus;
/**
 *  Represents the current state of a ATRangeFeedStatus.
 *  @enum   ATRangeFeedStatusInProgress : information is still in progress.
 *  @enum   ATRangeFeedStatusBackendError : error to retreive information from adtag platform.
 *  @enum   ATRangeFeedStatusNetworkError : network error, can't retreive information from adtag platform.
 *  @enum   ATRangeFeedStatusBackendSuccess : backend success.
 */
typedef enum{
    ATRangeFeedStatusInProgress,
    ATRangeFeedStatusBackendError,
    ATRangeFeedStatusNetworkError,
    ATRangeFeedStatusBackendSuccess
}ATRangeFeedStatus;
/**
 *  range beacons methodes delegation 
 */
@protocol ATRangeDelegate <NSObject>

/**
 *  this delegate will be called when a beacon start ranging the didRangeBeacons method. it  permits get status about the BeaconContent loading from the adtag platform.   *
 *  @param _beacons             the beacon ranging around the region.
 *  @param _beaconContents      the beacon's information.
 *  @param informationStatus    indicate if the SDK has loaded all the information about the beacons around from the adtag platform.
 *  @param feedstatus           gives information about the connection status.
 *  @param region               specific region when beacon are ranging around.
 */
-(void)didRangeBeacons:(NSArray *)_beacons
    beaconContents:(NSArray *)beaconContents
     informationStatus:(ATRangeInformationStatus )informationStatus
            feedStatus:(ATRangeFeedStatus)feedStatus
              region:(CLRegion *)region;

//-(void)didRangeBeacons:(NSArray *)beacons
//        beaconContents:(NSArray *)beaconContents
//     informationStatus:(ATRangeInformationStatus )informationStatus
//            feedStatus:(ATRangeFeedStatus)feedStatus
//              region:(CLRegion *)region;


@end
