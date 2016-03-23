//
//  PoiModel.h
//  Pods
//
//  Created by Sarra Srairi on 09/03/2015.
//
//

#import <UIKit/UIKit.h>
#import "ATEntity.h"
#import "ATConnectionConstants.h"
@interface ATPoi : ATEntity

//@property (strong ,nonatomic) NSArray *  accesses;
//@property (strong ,nonatomic) NSArray *  categories;

@property (nonatomic, getter=ThenewCategories) NSDictionary* newCategories;

-(NSString *) getName;

-(NSString *) getValueFromCategory: (NSString *)categoryy andfields:(NSString *)fieldd;
-(NSString *) extractValue:(NSDictionary *) value;

@end
