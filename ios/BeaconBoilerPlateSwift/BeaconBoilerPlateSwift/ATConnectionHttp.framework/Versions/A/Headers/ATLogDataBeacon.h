#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
#import "ATLogData.h"
#import "ATBeaconContent.h"
#import "ATBeacon.h"
#import "ATAdtagLogDataContent.h"

@interface ATLogDataBeacon : ATAdtagLogDataContent{
    
    ATBeacon   *beacon;
}

@property(nonatomic,retain) ATBeacon   *beacon;

- (id)initWithBeaconContent:(ATBeaconContent *)beaconContent
                    subType:(ATLogSubtype)subtype;

- (id)initWithBeaconContent:(ATBeaconContent *)beaconContent
               redirectType:(ATBeaconRedirectType)_redirectType
                       from: (NSString *) from;
@end

