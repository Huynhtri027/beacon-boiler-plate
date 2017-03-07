//
//  ViewController.m
//  BeaconBoilerPlate
//
//  Created by sarra srairi on 21/03/2016.
//  Copyright © 2016 sarra srairi. All rights reserved.
//

#import "ViewControllerBeacon.h"

@interface ViewControllerBeacon (){
    NSString *feedStatusString ;
}

@end

@implementation ViewControllerBeacon

- (void)viewDidLoad {
    [super viewDidLoad];
    //register the range delegate if you want to get the call back of the didRangeBeacon method
    beaconManager = [ATBeaconManager sharedInstance];
    [beaconManager registerAdtagRangeDelegate:self];
    // Do any additional setup after loading the view, typically from a nib.
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    
}
-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
}

/* Method to retreive notification BeaconContent from the AppDelegate
 -(void) load:(ATBeaconContent *)_beaconContent redirectType:(ATBeaconRedirectType)_redirectType from:(NSString *)_from{
 NSLog(@"i got it ");
 }
 */
// Help
// ** _beacons  : array of beacon detected arround
//
// ** _beaconContents : array of beacon information registred in Adtag platfrorm, so you can retreive all information needed with
//                      for example  [beaconContent getValueFromCategory:"value" andField:"field"]
//
// ** informationStatus : return the beacon information status : if ATRangeInformationStatus then you have succefuly downloaded
//                        all beacon range information from adtag
//
//
-(void)didRangeBeacons:(NSArray *)_beacons beaconContents:(NSArray *)_beaconContents informationStatus:(ATRangeInformationStatus)informationStatus feedStatus:(ATRangeFeedStatus)feedstatus{
    feedStatusString=@"";
    switch(feedstatus){
        case ATRangeFeedStatusInProgress:
            feedStatusString = @"IN_PROGRESS";
            break;
        case ATRangeFeedStatusBackendError:
            feedStatusString= @"BACKEND_ERROR";
            break;
        case ATRangeFeedStatusNetworkError:
            feedStatusString = @"NETWORK_ERROR";
            break;
        case ATRangeFeedStatusBackendSuccess:
            feedStatusString = @"BACKEND_SUCESS";
            break;
    }
    _txt_nbrBeacon.text =[NSString stringWithFormat:NSLocalizedString(@"beaconArround", @""),feedStatusString,_beacons.count,_beaconContents.count];
}

-(void)viewDidDisappear:(BOOL)animated{
    [super viewDidDisappear:animated];
 
}

@end
