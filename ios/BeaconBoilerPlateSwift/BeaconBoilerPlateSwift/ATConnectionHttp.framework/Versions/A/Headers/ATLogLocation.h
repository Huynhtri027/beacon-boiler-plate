//
//  LogLocation.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLog.h"
#import "ATLogDataLocation.h"
@interface ATLogLocation :  ATLog

- (id)initWithDataInformation:(NSString *)locationStatus
               locationAccess:(BOOL )locationAccess;
@end
