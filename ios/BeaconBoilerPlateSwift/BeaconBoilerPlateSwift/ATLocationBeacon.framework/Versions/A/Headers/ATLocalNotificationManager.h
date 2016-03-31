//
//  ATLocalNotificationDelete.h
//  ATLocationBeacon
//
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>

@interface ATLocalNotificationManager : NSObject  {
    NSUserDefaults *userDefaults;
    NSString *key;
}

- (id)initWithKey:(NSString *)key_;

-(void) saveNotification:(UILocalNotification *) notification;

-(void) deleteNotification;

@end
