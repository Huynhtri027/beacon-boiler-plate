//
//  beacon.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 04/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//



#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ATJSONModel.h"
typedef enum{
    ATSendLogInformation,
    ATReceiveBeaconContentInformation
}ATBeaconOrigin;

@protocol ATBeacon @end
@interface ATBeacon : ATJSONModel
@property (nonatomic) NSString *major;
@property (nonatomic) NSString *minor;
@property (nonatomic) NSString *uuid;
@property (nonatomic) NSString<Optional>  *rssi;
@property (nonatomic) NSString<Optional>  *proximity;
 
- (void)setMajor:(NSString*)n ;
- (id)init;
- (id)initWithCLBeacon:(CLBeacon*)beacon
        typeInitOrigin:(ATBeaconOrigin  )typeOrigin;
- (NSString *)generateKey;

@end
