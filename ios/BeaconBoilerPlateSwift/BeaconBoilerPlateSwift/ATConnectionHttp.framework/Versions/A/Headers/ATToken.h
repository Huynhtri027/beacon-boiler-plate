

//
//  TokenModel.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 02/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ATUrlRoot.h"
#import "ATUser.h"
#import "ATConnectionConstants.h"
#import "ATJSONModel.h"
@interface ATToken : ATJSONModel


@property (strong, nonatomic, readwrite) NSString *accessToken;
@property (strong, nonatomic, readwrite) NSString *refreshToken;
@property (strong, nonatomic, readwrite) NSString *customer;

@end
