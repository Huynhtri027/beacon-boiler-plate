//
//  AccessModel.h
//  Pods
//
//  Created by Sarra Srairi on 09/03/2015.
//
//


#import "ATTechnology.h"
#import "ATEntity.h"
@interface ATAccess : ATEntity

@property (strong, retain) NSString *name;
@property (strong, retain) NSString <Optional>  *redirectUrl;
@property (strong, nonatomic) NSArray <ATTechnology,Optional> *technologies;

-(ATTechnology *) findTechno:(NSString *)technologyType;
@end
