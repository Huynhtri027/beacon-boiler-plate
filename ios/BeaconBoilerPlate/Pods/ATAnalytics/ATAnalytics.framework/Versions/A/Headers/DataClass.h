//
//  DataClass.h
//  AdTagCoHttp
//
//  Created by Sarra Srairi on 13/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Corelocation/Corelocation.h>
@interface DataClass : NSObject
{
    
    NSString *global_Variable_Notification_type;
    NSString *global_Variable_Log_Type;
    NSString *global_Variable_ACESSToken;
    NSCache *cache ;
    BOOL  global_Forground_Stat;
    int * FirstExcute;
    CLBeacon* bestRSSI;
}
/**
 *  global variable check the type of notification in app_beacon Log type
 */
@property(nonatomic,retain)NSString *global_Variable_Notification_type;
/**
 *  global variable check the Log type (Log in background / active / controller)
 */
@property(nonatomic,retain)NSString *global_Variable_Log_Type;
@property(nonatomic,retain)NSString *global_Variable_ACESSToken;
@property(nonatomic,retain)NSCache *cache  ;
@property(nonatomic )   BOOL global_Forground_Stat;
@property(nonatomic)int * FirstExcute;
@property(nonatomic) CLBeacon* bestRSSI;
+(DataClass*)getInstance;
@end
