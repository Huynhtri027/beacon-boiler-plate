//
//  ViewController.swift
//  beaconRange
//
//  Created by sarra srairi on 10/08/2016.
//  Copyright © 2016 R&D connecthings. All rights reserved.
//

import UIKit
import ATAnalytics
import ATLocationBeacon

class ViewController: UIViewController,ATRangeDelegate {
    /**
     *  this delegate will be called when a beacon start ranging the didRangeBeacons method. it  permits get status about the BeaconContent loading from the adtag platform.   *
     *  @param _beacons             the beacon ranging around the region.
     *  @param _beaconContents      the beacon's information.
     *  @param informationStatus    indicate if the SDK has loaded all the information about the beacons around from the adtag platform.
     *  @param feedstatus           gives information about the connection status.
     *  @param region               specific region when beacon are ranging around.
     */
    @available(iOS 4.0, *)
    public func didRangeBeacons(_ _beacons: [Any]!, beaconContents: [Any]!, informationStatus: ATRangeInformationStatus, feedStatus: ATRangeFeedStatus) {
        var feedStatusString: String
        
        
        switch feedStatus {
        case ATRangeFeedStatusInProgress:
            feedStatusString = "IN_PROGRESS"
        case ATRangeFeedStatusBackendError:
            feedStatusString = "BACKEND_ERROR"
        case ATRangeFeedStatusNetworkError:
            feedStatusString = "NETWORK_ERROR"
        case ATRangeFeedStatusBackendSuccess:
            feedStatusString = "BACKEND_SUCCESS"
        default:
            feedStatusString = ""
        }
        
        
        self.txt_nbrBeacon.text = String(format: NSLocalizedString("beaconDetected", comment: ""), feedStatusString, _beacons.count, beaconContents.count)

    }

    
    @IBOutlet weak var txt_nbrBeacon: UILabel!
     var beaconManager: ATBeaconManager!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        beaconManager = ATBeaconManager.sharedInstance()
        beaconManager.registerAdtagRangeDelegate(self)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    } 
}

