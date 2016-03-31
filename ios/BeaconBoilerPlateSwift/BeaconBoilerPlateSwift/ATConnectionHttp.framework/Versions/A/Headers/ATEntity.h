//
//  EntityAccess.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 07/04/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATJSONModel.h"
@protocol ATEntity @end
@interface ATEntity : ATJSONModel

@property (nonatomic,retain) NSString *id;
@property(assign,nonatomic) long modifiedDate;
@property(assign,nonatomic) long createdDate;
@property(assign,nonatomic) BOOL deleted;
@property(nonatomic,retain) NSString<Optional> *company;

@end
