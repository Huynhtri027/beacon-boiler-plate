//
//  AppDelegate.swift
//  BeaconBoilerPlateSwift
//
//  Created by sarra srairi on 24/03/2016.
//  Copyright © 2016 sarra srairi. All rights reserved.
//

import UIKit
import ATConnectionHttp
import ATAnalytics
import ATLocationBeacon



@UIApplicationMain
class AppDelegate: ATBeaconAppDelegate, UIApplicationDelegate,ATBeaconNotificationDelegate {
    
    var window: UIWindow?
    
    
    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
        // Override point for customization after application launch.
        /**
        * Initialize the BEACON SDK ATUrlTypeDemo
        **/
        initAdtagInstanceWithUrlType(ATUrlTypeDemo ,userLogin: "*****" ,userPassword: "*****" ,userCompany: "***" ,beaconUuid: "*******-****-****-****-*****************");
        
        if  ((launchOptions?[UIApplicationLaunchOptionsLocationKey] as? NSDictionary) != nil) {
        }
        
        if(UIApplication.instancesRespondToSelector(Selector("registerUserNotificationSettings:"))){
            
            if #available(iOS 8.0, *) {
                let notificationCategory:UIMutableUserNotificationCategory = UIMutableUserNotificationCategory()
                notificationCategory.identifier = "INVITE_CATEGORY"
                // notificationCategory .setActions([replyAction], forContext: UIUserNotificationActionContext.Default)
                //registerting for the notification.
                application.registerUserNotificationSettings(UIUserNotificationSettings(forTypes:[ .Sound, .Alert,
                    .Badge], categories: nil));
            }else {
                // Fallback on earlier versions
            }
        }else{
            if #available(iOS 8.0, *) {
                application.registerForRemoteNotifications()
            } else {
                // Fallback on earlier versions
            }
            //do iOS 7 stuff, which is pretty much nothing for local notifications.
        }
        
        return true
    }
    
    override func applicationDidBecomeActive(application: UIApplication) {
        super.applicationDidBecomeActive(application)
    }
    
    override func applicationWillResignActive (application: UIApplication){
        super.applicationWillResignActive(application)
    }
    func application(application: UIApplication, didReceiveLocalNotification notification: UILocalNotification) {
        
        if application.applicationState != UIApplicationState.Active {
            
            // go ahead
        }
    }
    
    func applicationDidEnterBackground(application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }
    
    func applicationWillEnterForeground(application: UIApplication) {
        // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    }
    
    
    func applicationWillTerminate(application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }
    //protocol methods
    func createNotification(_beaconContent: ATBeaconContent!) -> UILocalNotification! {
    
        let kLocalNotificationMessage:String! = _beaconContent.getNotificationDescription()
        let kLocalNotificationAction:String! = _beaconContent.getAlertTitle()
        let kLocalNotificationTimeInterval:NSTimeInterval = 5
        let uudid :CFUUIDRef = CFUUIDCreate(nil);
        let uudidString  = CFUUIDCreateString(nil, uudid);
        let infoDict = [uudidString as NSString : "uuid"]
        //var infoDict = NSDictionary(object: uudidString as NSString, forKey: "uuid" as NSString)
        let localNotification:UILocalNotification = UILocalNotification()
        localNotification.fireDate = NSDate(timeIntervalSinceNow:kLocalNotificationTimeInterval)
        localNotification.alertBody = kLocalNotificationMessage
        localNotification.alertAction = kLocalNotificationAction
        print("create notification from app delegate");
        localNotification.soundName = UILocalNotificationDefaultSoundName
        localNotification.userInfo = infoDict
        UIApplication.sharedApplication().scheduleLocalNotification(localNotification)
        return localNotification;
        
    }
    
}

