//
//  ATBeaconNotificationChain.h
//  Pods
//
//  Created by sarra srairi on 18/01/2016.
//
//

#import <Foundation/Foundation.h>
#import "ATBeaconNotificationStrategyDelegate.h"
#import <ATConnectionHttp/ATConnectionHttp.h>
#import <ATAnalytics/ATAnalytics.h>
#import "ATBeaconRangeDelegate.h"
#import "ATPhoneModeDelegate.h"
#import "ATBeaconUtils.h"


@interface ATBeaconNotificationChain : NSObject <ATBeaconNotificationStrategyDelegate>{
    
    NSMutableArray  *listBeaconStrategyNotification;
    id <ATBeaconNotificationStrategyDelegate> strategyNotification ;
    // id ATBeaconNotificationDelegate
    //ATBeaconNotificationStrategy *strategyNotification;
}
@property (strong, nonatomic) NSMutableArray  *listBeaconStrategy;
-(void)addStrategy :(id<ATBeaconNotificationStrategyDelegate>) _strategyNotification; 
+ (ATBeaconNotificationChain *)sharedInstance;
- (NSString *)beaconContentCategoryInformation: (ATBeaconContent *)beaconContent;
@end
