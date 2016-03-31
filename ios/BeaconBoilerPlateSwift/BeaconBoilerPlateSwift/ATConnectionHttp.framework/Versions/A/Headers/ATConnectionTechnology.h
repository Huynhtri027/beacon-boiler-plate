//
//  ATConnectionQR.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 02/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATUrlRoot.h"
#import "ATUser.h"
#import "ATConnection.h"
#import "ATAdtagContent.h"
#import "ATIdentifiers.h"
#import "ATJSONHTTPClient.h"
#import "ExtendNSLogFunctionality.h"
@interface ATConnectionTechnology : NSObject{

    ATConnection  * connection ;
    ATUrlRoot *urlRoot ;
    ATAdtagContent* adtagContent;
    ATUser *userInformation ;
}

- (id)init;
- (void)getResponseHandlerAdtagContent : (NSArray *) identifiers
                             completion:(JSONModelBlock)completeBlock;
@end
