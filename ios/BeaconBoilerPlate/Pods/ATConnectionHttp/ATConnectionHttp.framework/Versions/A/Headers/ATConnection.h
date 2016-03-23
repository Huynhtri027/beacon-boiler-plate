//
//  TagConnctions.h
//  AdTagConnectionHttpLibrary
//
//  Created by Sarra Srairi on 02/03/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "ATUrlRoot.h"
#import "ATUser.h"
#import "ATToken.h"
#import <CoreData/CoreData.h>
#import "ATJSONModelLib.h"
#import "ATBeaconContent.h"
#import "ATBeaconList.h"
#import "ExtendNSLogFunctionality.h"
typedef enum{
    password =1,
    web =3
}GRANT_TYPE;
@interface ATConnection : NSObject{
    GRANT_TYPE passType;
    ATUser *userCo ;
    ATUrlRoot *urlCo ;
    ATToken *tokenModel;
    NSString *validToken;
    NSObject *validTokenLock;
    double nextTimeToRefreshToken;
    NSString *validHeaderToken;
    int maxTimeBeforeRefreshingToken;
}



+ (ATConnection *)sharedInstance ;
- (void) getHeaderTokenCompletion:(JSONObjectBlock)completeBlock;

@end
