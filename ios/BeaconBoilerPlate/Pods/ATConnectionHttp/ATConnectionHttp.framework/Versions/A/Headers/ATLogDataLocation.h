//
//  DataLocation.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 08/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLogData.h"
@interface ATLogDataLocation : ATLogData{
    NSString *location_status;
    BOOL location_access_authorize;
}
@property(nonatomic,retain) NSString *location_status;
@property(nonatomic ) BOOL location_access_authorize;
- (id)initWithDataInformation:(NSString *)locationStatus
               locationAccess:(BOOL )locationAccess;
@end
