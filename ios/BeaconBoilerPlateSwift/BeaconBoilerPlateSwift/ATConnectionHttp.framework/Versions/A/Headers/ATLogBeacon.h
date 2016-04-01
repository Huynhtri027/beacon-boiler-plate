//
//  LogBeacon.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 07/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLogDataBeacon.h"
#import "ATLog.h"
#import "ATBeaconList.h"
@interface ATLogBeacon : ATLog


- (id)initWithBeaconContent:(ATBeaconContent *)beaconContent
                redirecType:(ATBeaconRedirectType )_redirectType
                       from:(NSString *) from;

- (id)initWithBeaconContent:(ATBeaconContent *)beaconContent
                        subtype:(ATLogSubtype)subtype;


- (id)initWithBeaconsAround:(NSArray <ATBeacon> *)beaconAround
                    subtype:(ATLogSubtype)subtype;
@end
