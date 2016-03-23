//
//  ATLogDataBeaconArround.h
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

@interface ATLogDataBeaconArround : ATAdtagLogDataContent{
    
    ATBeacon   *beacon;
}

@property(nonatomic,retain) ATBeacon   *beacon;


- (id)initWithBeacon:(ATBeacon *)beaconArround
             subType:(ATLogSubtype)sub;
@end
