//
//  ATBeaconAlertParameter.h
//  ATConnectionHttp
//
//  Created by sarra srairi on 02/02/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>

@interface ATBeaconAlertParameter : NSObject {
    
    int countSameProximity;
    BOOL isActionDone;
    long maxTimeBeforeResetingIsActionDone;
    CLProximity currentActionProximity;
    CLProximity lastProximity;
    BOOL isReadyForAction ;
    BOOL isInProximityForAction;
}

@property  int countSameProximity;
@property  BOOL isActionDone;
@property  long maxTimeBeforeResetingIsActionDone;
@property  CLProximity currentActionProximity;
@property  CLProximity lastProximity;
@property  BOOL isReadyForAction ;
@property  BOOL isInProximityForAction;

- (void) actionIsDone:(CLProximity) proximity ;
- (void) countSameProximityPlusOne ;
- (void) countSameProximityReset ;

@end

