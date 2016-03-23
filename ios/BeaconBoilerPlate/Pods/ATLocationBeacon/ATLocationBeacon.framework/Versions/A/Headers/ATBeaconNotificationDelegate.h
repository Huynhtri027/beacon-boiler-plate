//
//  AdTagBeaconNotificationDelegate.h
//  Pods
//
//  Created by Sarra Srairi on 02/04/2015.
//
//

#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
/**
 *   Notification methodes delegation
 */
@protocol ATBeaconNotificationDelegate <NSObject>
/**
 *  Will allow you to create your own notification when the application is in backgound mode and a beacon enter a region as describe in the official doc
 *
 *  @param _beaconContent this information is related to a specific beacon
 *
 *  @return the local notification you created
 */
//-(UILocalNotification*) createNotification:(ATBeaconContent *)_newBeaconContent
//                 lastBeaconContentDetected:(ATBeaconContent *)_lastBeaconContent;

-(UILocalNotification*) createNotification:(ATBeaconContent *)_beaconContent; 


@end

