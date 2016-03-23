//
//  AdUser.h
//  AdTagHttpConnections
//
//  Created by Sarra Srairi on 02/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATConnectionConstants.h"
@interface ATUser : NSObject
{
    NSString *login;
    NSString *passwors;
    NSString *headerToken;
    NSString *company;
    NSString *db;

}
@property(nonatomic,retain) NSString *login;
@property(nonatomic,retain) NSString *company;
@property(nonatomic,retain) NSString *password;
@property(nonatomic,retain) NSString *headerToken;
@property(nonatomic,retain) NSString *db;
+ (ATUser *)sharedInstance;
- (NSString*) generateAuthorizationHeader;
+ (id) initInstance: (NSString * ) Login
               Pass: (NSString * ) Pass
           Compagny: (NSString * ) Company;


- (id) initWithParamLocal ;
- (void) ajoutDbValue:(NSString *)database;
@end
