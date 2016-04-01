//
//  BeaconUtils.h
//  CtbeaconManagerLib
//
//  Created by Sarra Srairi on 01/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@interface ATBeaconUtils : NSObject
+(NSString *)generateKeyForBeacon:(CLBeacon *)beacon;
@end
