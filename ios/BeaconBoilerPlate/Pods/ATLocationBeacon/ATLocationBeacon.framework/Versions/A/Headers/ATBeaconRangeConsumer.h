//
//  AdtagBeaconRange.h
//  CtbeaconManagerLib
//
//  Created by Stevens Olivier on 03/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATBeaconConsumer.h"
#import "ATBeaconRangeDelegate.h"

@interface ATBeaconRangeConsumer : ATBeaconConsumer{
    NSObject *adtagBeaconRangeDelegateLock;
    id<ATRangeDelegate> adtagBeaconRangeDelegate;
}

-(void) registerAdtagBeaconRangeDelegate:(id<ATRangeDelegate>) adtagBeaconRangeDelegate;

@end
