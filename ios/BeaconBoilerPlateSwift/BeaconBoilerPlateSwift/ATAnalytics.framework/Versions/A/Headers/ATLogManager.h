//
//  AdTagLogManager.h
//  Pods
//
//  Created by Sarra Srairi on 17/03/2015.
//
//

#import <Foundation/Foundation.h>
 
#import "ATDbLogManager.h"
#import "ATLogDbAnswer.h"
/**
 *  ATLogManager is the interface that allows you to send set up the setting for sending the logs to adTag platform
 */
@interface ATLogManager : NSObject{
    NSInteger *nbr_MAX;
    ATDbLogManager * dbLogManager;
    double nextTimeToSend;
    ATConnectionLog  * connection ;
    NSThread* timerThread ;
    int maxLogInDbBeforeSending;
    int maxTimeToWaitBeforeSending;
    int maxNumberToSendToServer;
    BOOL sendLogWifiOnly;
}
/**
 *  The max number before sending the log to adtag platform
 */
@property(nonatomic)int maxLogInDbBeforeSending;
/**
 *  The max time to wait befor sending the log to adtag platform
 */
@property(nonatomic)int maxTimeToWaitBeforeSending;
/**
 *  Max log number to send
 */
@property(nonatomic)int maxNumberToSendToServer;
/**
 *  Check the connection status and choose if you want to do a push only if the device is connected to the WIFI
 */
@property(nonatomic)BOOL sendLogWifiOnly;
/**
 *  Get singelton instance
 *
 *  @return current ATlogManager
 */
+ (ATLogManager *)sharedInstance ;
/**
 *  Initilize the ATlogManager with specific proprety. If you use the defaut init you will get the default value :
 *  - maxLogInDbBeforeSending = 50
 *  - maxTimeToWaitBeforeSending = 30
 *  - maxNumberToSendToServer = 200
 *
 *  @param maxtimeToWaitBeforeSending  the time to define the frequence for sending the log
 *  @param maxLoginDeb                 logs' the maximum number to add in the base
 *  @param maxNumberToSend             logs' the maximum number to send to the server (adTag platform)
 *  @param wifiOnly                    YES : this options allows you to send log to adTag only if the target is connected to wifi
 *
 *  @return AtlogManager
 */
+ (id) initInstanceWithInformtion:(int)maxtimeToWaitBeforeSending
           MaxLogInDbBeforSending:(int)maxLoginDeb
          maxNumberToSendToServer:(int)maxNumberToSend
                  sendLogWifiOnly:(BOOL)wifiOnly;
/**
 *  Allows you send logs to adtag server
 *
 *  @param log the log information
 */
-(void)sendLog:(ATLog *)log;
@end
