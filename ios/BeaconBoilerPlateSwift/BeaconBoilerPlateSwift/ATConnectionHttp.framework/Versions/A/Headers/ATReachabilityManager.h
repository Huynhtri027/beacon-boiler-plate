//
//  ATReachabilityManager.h
//  ATConnectionHttp
//
//  Created by sarra srairi on 25/02/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//
#import <SystemConfiguration/SystemConfiguration.h>
#import <Foundation/Foundation.h>
#import "ATReachability.h"
@interface ATReachabilityManager : NSObject

@property (strong, nonatomic) ATReachability *reachability;
+ (ATReachabilityManager *)sharedManager;
+ (NetworkStatus)currentReachabilityStatus;
 
@end
