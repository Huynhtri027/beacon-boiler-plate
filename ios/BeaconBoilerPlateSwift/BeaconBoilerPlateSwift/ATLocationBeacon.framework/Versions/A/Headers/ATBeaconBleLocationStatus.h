//
//  AdtagBeaconBleLocationStatus.h
//  CtbeaconManagerLib
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <ATAnalytics/ATAnalytics.h>
#import <Corelocation/Corelocation.h>
#import <Corelocation/Corelocation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATBeaconBleLocationStatusDelegate.h"

@interface ATBeaconBleLocationStatus : NSObject<CBCentralManagerDelegate,CLLocationManagerDelegate>
{
    CBCentralManager * bluetoothManager ;
    CLLocationManager *locationManager;
    ATLogManager *logManager;
    NSObject *adtagBeaconBleLocationStatusDelegateLock;
    id<ATBeaconBleLocationStatusDelegate> adtagBeaconBleLocationStatusDelegate;
    CBCentralManagerState lastBleStatus;
    CLAuthorizationStatus lastLocationStatus;
    
}

@property(nonatomic,retain)CBCentralManager *bluetoothManager;
@property(nonatomic)CLLocationManager *locationManager;
@property(nonatomic)CBCentralManagerState lastBleStatus;
@property(nonatomic)CLAuthorizationStatus lastLocationStatus;

-(void) registerAdtagBeaconBleLocationDelegate:(id<ATBeaconBleLocationStatusDelegate>) adtagBleLocationStatusDelegate;
+ (ATBeaconBleLocationStatus *)sharedInstance;
@end
