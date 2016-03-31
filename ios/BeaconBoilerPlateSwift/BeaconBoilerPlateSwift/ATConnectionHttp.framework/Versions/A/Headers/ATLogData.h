//
//  Data.h
//  AdTagLog
//  build 2.3
//  Created by Sarra Srairi on 11/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>
#import <sys/utsname.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <net/if.h>
#import "ATJSONModel.h"
#import "ATUser.h"
#import "ATConnectionConstants.h"
#import <AdSupport/AdSupport.h>
#import "ATReachabilityManager.h"
typedef enum{
    ATLogSubtypeBeaconNotification ,
    ATLogSubtypeBeaconEnterRegion ,
    ATLogSubtypeBeaconExitRegion ,
    ATLogSubtypeBeaconAround ,
    ATLogSubtypeBeaconAction ,
    ATLogSubtypeBleStatus ,
    ATLogSubtypeBeaconAlert,
    ATLogSubtypeRedirect,
    ATLogLoad_content,
}ATLogSubtype;


@protocol ATLogData @end
@interface ATLogData : ATJSONModel{
    NSString *lib_version;
    NSString *application_name;
    NSString *application_version;
    NSString *phone_id;
    NSString *ua;
    long long   date;
    NSString *ip;
    NSString *db;
    NSString *company;
    int network_status;
    NSString *subtype;
    NSString *user_id_ad_autorized;
    NSString *user_id;
    ATReachabilityManager *reachabilityManager;
}


@property(nonatomic,retain) NSString *lib_version;
@property(nonatomic,retain) NSString *application_name;
@property(nonatomic,retain) NSString *application_version;
@property(nonatomic,retain) NSString *phone_id;
@property(nonatomic,retain) NSString *ua;
@property(nonatomic,assign) long long date;
@property(nonatomic,retain) NSString *ip;
@property(nonatomic,retain) NSString *db;
@property(nonatomic,retain) NSString *company;
@property(nonatomic) int network_status;
@property(nonatomic,retain) NSString *subtype;
@property(nonatomic,retain) NSString *user_id_ad_autorized;
@property(nonatomic,retain) NSString *user_id;
-(id )initDataWithSubtype:(ATLogSubtype)sub;
-(NSString*)getIdPhone;
-(NSString*)getUA;
-(NSString *) getCurrentVersionApplication; 
@end
