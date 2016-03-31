//
//  AdTagBeaconNotificationDelegate.h
//  Pods
//
//  Created by Sarra Srairi on 02/04/2015.
//
//

#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>

@protocol ATPhoneModeDelegate <NSObject>

-(void) onForeground;

-(void) onBackground;

@end

