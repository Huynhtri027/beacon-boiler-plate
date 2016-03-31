//
//  ViewController.swift
//  BeaconBoilerPlateSwift
//
//  Created by sarra srairi on 24/03/2016.
//  Copyright © 2016 sarra srairi. All rights reserved.
//

import UIKit
import ATConnectionHttp
import ATAnalytics
import ATLocationBeacon

class ViewControllerBeacon: UIViewController,ATRangeDelegate {
    @IBOutlet weak var txt_nbrBeacon: UILabel!
    var beaconManager: ATBeaconManager!
    var content: ATBeaconContent!
    var feedStatusString : NSString!
    override func viewDidLoad() {
        beaconManager = ATBeaconManager.sharedInstance()
        ATBeaconManager.sharedInstance().registerAdtagRangeDelegate(self)
        // Do any additional setup after loading the view, typically from a nib.
        super.viewDidLoad()
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func didRangeBeacons(_beacons: [AnyObject]!, beaconContents: [AnyObject]!, informationStatus: ATRangeInformationStatus, feedStatus: ATRangeFeedStatus, region: CLRegion!) {
        
        switch feedStatus {
        case ATRangeFeedStatusInProgress:
            feedStatusString = "IN_PROGRESS"
            
        case ATRangeFeedStatusBackendError:
            feedStatusString = "BACKEND_ERROR"
            
        case ATRangeFeedStatusNetworkError:
            feedStatusString = "NETWORK_ERROR"
            
        case ATRangeFeedStatusBackendSuccess:
            feedStatusString = "BACKEND_SUCESS"
        default:
            feedStatusString = " "
        }
        
        
        self.txt_nbrBeacon.text = String.localizedStringWithFormat(NSLocalizedString("%@, %d beacon(s) detected,%d content(s) attached to the beacon(s) on Adtag downloaded",comment: "demo"), feedStatusString, _beacons.count,beaconContents.count)
        for (var i = 0 ; i < beaconContents.count ;i++) {
            content = beaconContents[i] as! ATBeaconContent;
            NSLog("%@", self.content);
        
        }
     
        
    }
    
}

