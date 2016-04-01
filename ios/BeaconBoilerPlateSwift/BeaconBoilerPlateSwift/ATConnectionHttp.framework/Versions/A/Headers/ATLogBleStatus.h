//
//  LogBleStatus.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLog.h"
#import "ATLogDataBleStatus.h"
@interface ATLogBleStatus : ATLog

- (id)initWithDataInformation:(NSString *)bleStatus
                    bleAccess:(BOOL )bleAccess;
@end
