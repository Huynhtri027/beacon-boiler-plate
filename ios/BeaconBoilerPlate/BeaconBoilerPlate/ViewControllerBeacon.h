//
//  ViewController.h
//  BeaconBoilerPlate
//
//  Created by sarra srairi on 21/03/2016.
//  Copyright © 2016 sarra srairi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <ATLocationBeacon/ATLocationBeacon.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
@interface ViewControllerBeacon : UIViewController <ATRangeDelegate>{
    ATBeaconManager *beaconManager;
}

@property (weak, nonatomic) IBOutlet UILabel *txt_nbrBeacon;
/* Method to retreive notification BeaconContent : must call this method in the delegate when you will push your view controller in didReceiveLocalNotification
-(void) load:(ATBeaconContent *)_beaconContent redirectType:(ATBeaconRedirectType)_redirectType from:(NSString *)_from;
*/
 @end

