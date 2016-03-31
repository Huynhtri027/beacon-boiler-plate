//
//  AdTagConnexionBeacon.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 18/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATUrlRoot.h"
#import "ATUser.h"
#import "ATBeaconContent.h"
#import "ATBeaconList.h"
#import "ATConnection.h"
#import "ExtendNSLogFunctionality.h"
#import "ATConnectionConstants.h"
@interface ATConnectionBeacon : NSObject{
    ATConnection  * connection ;
    ATUrlRoot *urlRoot ;
    ATBeaconList * beaconList;
    ATUser *userInformation ;
}

 
- (id)init;
- (void)getBeaconInformationListBeacons : (NSArray <ATBeacon > *) listbeacons
                              completion:(JSONModelBlock)completeBlock;

@end
