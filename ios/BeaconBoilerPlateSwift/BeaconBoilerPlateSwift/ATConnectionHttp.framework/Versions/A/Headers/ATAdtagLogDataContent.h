//
//  ATAdtagLogDataContent.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 16/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLogData.h"
#import "ATAdtagContent.h"


typedef enum{
    ATBeaconRedirectTypeAlert,
    ATBeaconRedirectTypeDirect,
    ATBeaconRedirectTypeNotification,
}ATBeaconRedirectType;

typedef enum{
    ATFeedStatusInProgress,
    ATFeedStatusBackendError,
    ATFeedStatusNetworkError,
    ATFeedStatusBackendSuccess
}ATFeedStatus;

@protocol ATAdtagLogDataContent @end
@interface ATAdtagLogDataContent : ATLogData {
    NSString *access_name;
    NSString *access_id;
    NSString *techno_type;
    NSString *techno_hash;
    NSString *poi_id;
    NSString *url;
    NSString *poi_name;
    NSString *redirect_type;
    NSString *from;
    NSString *campaign_id;
    NSString *campaign_name;

}
@property(nonatomic,retain) NSString *redirectType;
@property(nonatomic,retain) NSString *access_name;
@property(nonatomic,retain) NSString *access_id;
@property(nonatomic,retain) NSString *techno_type;
@property(nonatomic,retain) NSString *techno_hash;
@property(nonatomic,retain) NSString *redirect_type;
@property(nonatomic,retain) NSString *from;
@property(nonatomic,retain) NSString *poi_id;
@property(nonatomic,retain) NSString *url;
@property(nonatomic,retain) NSString *poi_name;
@property(nonatomic,retain) NSString *campaign_id;
@property(nonatomic,retain) NSString *campaign_name;

@end
