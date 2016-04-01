//
//  ATBeaconNotificationStrategyDelegate.h
//  ATLocationBeacon
//
//  Created by sarra srairi on 12/01/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATBeaconRangeDelegate.h"
#import "NSUserDefaults.h"

/**
 * ATBeaconNotificationStrategyDelegate manages the notification when application is on background mode : users can custom the notification behavior, and this by adding as many as he wants strategies. Through this delegate Methods he can manage the process
 */

@protocol ATBeaconNotificationStrategyDelegate <NSObject>

/**
 *  CreateNotification : this method will be called when user will ask for CREATING notification : choose your own process to allow user create notification
 *  the return statement (BOOL) will define the create notification behavior
 *
 *  @param newBeaconContent (ATBeaconContent) :the best beacon detected with the specific information from the Adtag platform
 *  @param feedStatus (ATRangeFeedStatus):{ATRangeInformationStatusComplete, ATRangeInformationStatusEmpty, ATRangeInformationStatusPartial} beaconContent status : this information is related to connection to the adtag platform
 */
-(BOOL) createNewNotification:(ATBeaconContent *)newBeaconContent
                feedStatus:(ATRangeFeedStatus )feedStatus;

/**
 *  deleteCurrentNotification : this method will be called when user will ask for DELETING notification : choose your own process to allow user delete notification
 *  the return statement (BOOL) will define the delete notification behavior
 *
 *  @param newBeaconContent (ATBeaconContent) :the best beacon detected with the specific information from the Adtag platform
 *  @param feedStatus (ATRangeFeedStatus)  :{ATRangeInformationStatusComplete, ATRangeInformationStatusEmpty, ATRangeInformationStatusPartial} beaconContent status : this information is related to connection to the adtag platform
 */
-(BOOL) deleteCurrentNotification:(ATBeaconContent *)newBeaconContent
                       feedStatus:(ATRangeFeedStatus) feedStatus;

/**
 *  onNotificationIsCreated :will be called when notiifcation will be displayed
 *
 *  @param beaconContent (ATBeaconContent)  the beacon content
 *  @param notificationStatus (BOOL): return TRUE if notification is created and FALSE if isn't
 */
-(void) onNotificationIsCreated:(ATBeaconContent *)beconContent
             notificationStatus:(BOOL)notificationStatus;

/**
 *  onNotificationIsDeleted :will be called when notiifcation will be deleted
 *
 *  @param beaconContent (ATBeaconContent) :the beacon content
 *  @param notificationStatus (BOOL) :return TRUE if notification is created and FALSE if isn't
 */
-(void) onNotificationIsDeleted:(ATBeaconContent *)beconContent
             notificationStatus:(BOOL)notificationStatus;

/**
 *  onStartMonitoringRegion: will be invoked when a monitoring region in background will be executed
 *
 *  @param beaconContent (ATBeaconContent) : Beacon content detected
 *  @param feedStatus (ATRangeFeedStatus) :{ATRangeInformationStatusComplete, ATRangeInformationStatusEmpty, ATRangeInformationStatusPartial} beaconContent status : this information is related to connection to the adtag platform
 */
-(void) onStartMonitoringRegion:(ATBeaconContent *)beaconContent
                     feedStatus:(ATRangeFeedStatus)_feedStatus;
/**
 *  Inoked when application is on Background mode
 */
-(void) onBackground;
/**
 *  Inoked when application is on Foreground mode
 */
-(void) onForeground;
/**
 *  Keeping information reference loaded when application is onBackground especially when application is killed
 *
 *  @param beaconContent (ATBeaconContent)  BeaconContent loaded
 */
-(void) onLoad:(NSUserDefaults *)beaconDataOld;
/**
 *  Keeping information reference saved when application is onBackground especially when application is killed
 *
 *  @param beaconContent (ATBeaconContent)  BeaconContent saved
 */
-(void) onSave:(NSUserDefaults *)beaconDataOld;

@end
