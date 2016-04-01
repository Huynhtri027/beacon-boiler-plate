//
//  LogModel.h
//  Pods
//
//  Created by Sarra Srairi on 17/03/2015.
//
//
#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
#import "ATLog.h"
@interface ATLogList : ATJSONModel

//@property (strong, nonatomic) NSString * list ;

  @property (strong, nonatomic) NSArray <ATLog> *list;


- (id)init;

@end
