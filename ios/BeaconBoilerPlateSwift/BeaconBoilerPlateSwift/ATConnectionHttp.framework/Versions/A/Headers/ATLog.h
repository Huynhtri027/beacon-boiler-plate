//
//  logs.h
//  Pods
//
//  Created by Sarra Srairi on 17/03/2015.
//
//

#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
#import "ATLogData.h"


@protocol ATLog @end
@interface ATLog : ATJSONModel
@property (strong, nonatomic) NSString  *t;
@property (strong, nonatomic) NSString  *d;
@property (nonatomic) ATLogData  *data;
- (id)initWithDataInforamtion:(ATLogData*)data;
@end
