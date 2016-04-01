//
//  AdTagConnexionLog.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 18/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATUrlRoot.h"
#import "ATUser.h"
 
#import "ATBeaconList.h"
#import "ATConnection.h"
#import "ATLogList.h"
#import "ATLog.h"
#import "ATConnection.h"
#import "ExtendNSLogFunctionality.h"
@interface ATConnectionLog : NSObject{
    
    ATConnection  *connection ;
    ATUrlRoot *urlCoLog;
}
-(void)sendListLogs: (NSArray *) listlog
         completion:(JSONModelBlock)completeBlock;
- (id)init;
@end
