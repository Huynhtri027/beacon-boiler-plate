//
//  DataBleStatus.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLogData.h"
@interface ATLogDataBleStatus : ATLogData{
    NSString *ble_status;
    BOOL ble_access_authorize;
}
@property(nonatomic,retain) NSString *ble_status;
@property(nonatomic ) BOOL ble_access_authorize;

- (id)initWithDataInformation:(NSString *)bleStatus
                    bleAccess:(BOOL )bleAccess;
@end
