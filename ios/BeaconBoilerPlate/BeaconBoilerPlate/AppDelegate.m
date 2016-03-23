//
//  AppDelegate.m
//  BeaconBoilerPlate
//
//  Created by sarra srairi on 21/03/2016.
//  Copyright © 2016 sarra srairi. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewControllerBeacon.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    // Override point for customization after application launch.
    
    // init the adtag platforme with the
    // ** user Login : Login delivred by the Connecthings staff
    // ** user Password : Password delivred by the Connecthings staff
    // ** user Compagny : ....
    // ** beaconUuid : 64bit - UUID beacon number devivred by the Connecthings staff
    [self initAdtagInstanceWithUrlType:ATUrlTypeDemo userLogin:@"SDK_1" userPassword:@"ydYJJPX1nhKDNASG82Kz" userCompany:@"1" beaconUuid:@"B8DE8D59-EA9A-41E1-870F-9D8A4899E101"];
    
    //To add the application to the notification center
    if ([application respondsToSelector:@selector(registerUserNotificationSettings:)]) {
        [application registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes:UIUserNotificationTypeAlert|UIUserNotificationTypeBadge|UIUserNotificationTypeSound categories:nil]];
    }
    
    return YES;
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // if you implement didBeacomeActive you should add a super call
    // if you don't just remove all the method
    [super applicationDidBecomeActive:application];
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}
-(void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification{
    
    if ([UIApplication sharedApplication].applicationState!=UIApplicationStateActive) {
        // do something when users click on notification
        UIStoryboard* storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
        ViewControllerBeacon *BeaconController = [storyboard instantiateViewControllerWithIdentifier:@"beaconController"];
        /*
         **  You can retreive beaconContent notification with this line of code
         
         ATBeaconContent *beaconContent = [adtagBeaconManager getNotificationBeaconContent];
         
         ** You can also send Notification information to your BeaconController with the method beyond
         
         [BeaconController load:[adtagBeaconManager getNotificationBeaconContent] redirectType:ATBeaconRedirectTypeNotification from:nil];
         */
        
        UINavigationController *nav = [storyboard instantiateViewControllerWithIdentifier:@"nav"];
        [nav pushViewController:BeaconController animated:YES];
    }
}
-(UILocalNotification *)createNotification:(ATBeaconContent *)_beaconContent {
    ILog(@"create notification from app delegate");
    CFUUIDRef uudid = CFUUIDCreate(NULL);
    NSString *uudidString = (NSString *) CFBridgingRelease(CFUUIDCreateString(NULL, uudid));
    UILocalNotification *notification = [[UILocalNotification alloc]init];
    [notification setAlertBody:[_beaconContent getNotificationDescription]];
    if(SYSTEM_VERSION_GREATER_THAN(@"7.99")){
        [notification setAlertTitle:[_beaconContent getAlertTitle]];
    }
    NSDictionary *infoDict = [NSDictionary dictionaryWithObject:uudidString forKey:@"uuid"];
    [notification setUserInfo:infoDict];
    [[UIApplication sharedApplication] presentLocalNotificationNow: notification];
    
    return notification;
}


@end
