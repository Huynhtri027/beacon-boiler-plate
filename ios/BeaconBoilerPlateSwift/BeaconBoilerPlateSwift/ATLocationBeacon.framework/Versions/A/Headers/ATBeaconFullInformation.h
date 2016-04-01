//
//  BeaconInformationRangeBackground.h
//  Pods
//
//  Created by sarra srairi on 21/01/2016.
//
//

#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATBeaconRangeDelegate.h"
#import <CoreLocation/CoreLocation.h>

@interface ATBeaconFullInformation : NSObject {

    ATBeaconContent * beaconContent;
    ATRangeFeedStatus feedStatus ;
    CLBeacon *beacon;

}

-(void)resetBeaconFullInformationRegion; 
-(void)updateInformationBeaconFullInformation:(ATBeaconContent *)_beaconContent
                                       beacon:(CLBeacon *)_beacon
                                   feedStatus:(ATRangeFeedStatus)_feedStatus; 
@property (strong, nonatomic) ATBeaconContent *beaconContent;
@property (nonatomic) ATRangeFeedStatus feedStatus;
@property (strong, nonatomic) CLBeacon *beacon;
@end
