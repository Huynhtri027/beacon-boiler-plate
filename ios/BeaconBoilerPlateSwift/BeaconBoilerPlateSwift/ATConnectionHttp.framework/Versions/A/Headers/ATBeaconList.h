//
//  BeaconModel.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 04/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
#import "ATBeacon.h"
@interface ATBeaconList  : ATJSONModel

@property (strong, nonatomic) NSArray <ATBeacon> *beacons;


@end
