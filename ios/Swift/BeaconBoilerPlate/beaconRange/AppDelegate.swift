//
//  AppDelegate.swift
//  beaconRange
//
//  Created by sarra srairi on 10/08/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//

import UIKit
import ATAnalytics
import ATLocationBeacon
import AVFoundation
import UserNotifications



@UIApplicationMain
class AppDelegate: ATBeaconAppDelegate, UIApplicationDelegate {
    
    var window: UIWindow?
    
    
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        
        /*
         // Override point for customization after application launch.
         // HELP:
         // init the adtag platforme with the
         // ** user Login : Login delivred by the Connecthings staff
         // ** user Password : Password delivred by the Connecthings staff
         // ** user Compagny : Define the compagny name
         // ** beaconUuid : - UUID beacon number devivred by the Connecthings staff
         */
        
        initAdtagInstance(with: ATUrlTypePreprod, userLogin: "**LOGIN**", userPassword: "**PASSWORD**", userCompany: "**COMPAGNY**", beaconUuid: "**UUID**")
        
        if #available(iOS 10.0, *) {
            let center = UNUserNotificationCenter.current()
            center.requestAuthorization(options: [.alert, .sound]) { (granted, error) in
                // Enable or disable features based on authorization.
            }
        } else {
            if(UIApplication.instancesRespond(to: #selector(UIApplication.registerUserNotificationSettings(_:)))){
                let notificationCategory:UIMutableUserNotificationCategory = UIMutableUserNotificationCategory()
                notificationCategory.identifier = "INVITE_CATEGORY"
                //registerting for the notification.
                UIApplication.shared.registerUserNotificationSettings(UIUserNotificationSettings (types: [.alert, .badge, .sound], categories: nil))
            }
            
        }
        
        return true
    }
    
    
    override func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
        super.applicationWillResignActive(application)
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    }
    
    override func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
        super.applicationDidBecomeActive(application);
        
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
        
    }
    
    
    func applicationWillTerminate(application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }
    
    
}

