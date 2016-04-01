//
//  AdtagBeaconBleLocationStatusDelegate.h
//  CtbeaconManagerLib
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <Corelocation/Corelocation.h>
/**
 *   Bluetooth  & Location status methodes Delegation
 */
@protocol ATBeaconBleLocationStatusDelegate <NSObject>
 
/**
 *  This delegate method will be called when the app is Launching
 *
 *  @param bleStatus       represents the current state of the the ble stat such as UnauthorizedState, ble PoweredOff..
 *  @param locationStatus  represents the current authorization state of the application.
 */
-(void)checkBleStatus:(CBCentralManagerState)bleStatus
       locationStatus:(CLAuthorizationStatus)locationStatus;

@end
