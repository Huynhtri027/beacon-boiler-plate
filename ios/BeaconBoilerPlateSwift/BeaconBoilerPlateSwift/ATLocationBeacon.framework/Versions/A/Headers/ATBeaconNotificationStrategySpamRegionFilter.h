//
//  ATBeaconNotificationStrategyFilter.h
//  ATLocationBeacon
//
//  Created by sarra srairi on 12/01/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSUserDefaults.h"
#import "ATBeaconNotificationStrategyDelegate.h"
#import "ATLocalNotificationManager.h"
/**
 * Filter type based on Region Spam
 */
@interface ATBeaconNotificationStrategySpamRegionFilter : NSObject <ATBeaconNotificationStrategyDelegate> {
    NSString *category;
    NSString *field ;
    ATBeaconContent *lastBeaconDetected;
    NSUserDefaults *lastBeaconDetectedStored;
}
/**
 * The region will be defined by 2 attributes : category and field
 */
- (id)initWithCategoryAndField:(NSString *)_category
                         field:(NSString *)_field;

@property (strong, nonatomic) ATBeaconContent *lastBeaconDetected;
@property (strong, nonatomic) NSString *category;
@property (strong, nonatomic) NSString *field;
@end
