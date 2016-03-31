//
//  TechnologieModel.h
//  Pods
//
//  Created by Sarra Srairi on 09/03/2015.
//
//

#import "ATJSONModel.h"
@protocol ATTechnology @end

@interface ATTechnology : ATJSONModel
@property (strong, nonatomic, readwrite) NSString *url;
@property (nonatomic, readwrite) NSString *type;
@property (strong ,nonatomic) NSString *  hash;
@end
