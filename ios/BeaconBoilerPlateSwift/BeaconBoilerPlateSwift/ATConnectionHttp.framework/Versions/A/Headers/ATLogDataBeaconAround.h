//
//  ATLogDataBeaconAround.h
//  Pods
//
//  Created by Sarra Srairi on 02/12/2015.
//
//
#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
#import "ATLogData.h"
#import "ATBeaconContent.h"
#import "ATBeacon.h"
#import "ATAdtagLogDataContent.h"
#import <Foundation/Foundation.h>
#import "ATBeaconList.h"
@interface ATLogDataBeaconAround : ATAdtagLogDataContent{
    
    NSArray <ATBeacon>   *beaconsAround;
}

@property (strong, nonatomic) NSArray <ATBeacon> *beaconsAround;



- (id)initWithBeacon:(NSArray <ATBeacon>  *)beaconAround
             subType:(ATLogSubtype)sub;
@end
