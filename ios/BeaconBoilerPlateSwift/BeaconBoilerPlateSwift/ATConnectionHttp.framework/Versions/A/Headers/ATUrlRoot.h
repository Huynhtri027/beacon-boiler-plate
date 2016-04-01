//
//  UrlRoot.h
//  AdTagHttpConnections
//
//  Created by Sarra Srairi on 02/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATConnectionConstants.h"

typedef enum{
    ATUrlTypeLocal,
    ATUrlTypeDemo,
    ATUrlTypePreprod,
    ATUrlTypeProd,
    ATUrlTypeItg
}ATUrlType;

@interface ATUrlRoot : NSObject
{
    ATUrlType urlType;
    NSString *root;
    NSString *rootStatic;
    NSString *clientId;
    NSString *clientSecret;
    NSString *redirectUri;
    BOOL useRealTime;
}
@property(nonatomic,assign) ATUrlType urlType;
@property(nonatomic,retain) NSString *root;
@property(nonatomic,retain) NSString *rootStatic;
@property(nonatomic,retain) NSString *clientId;
@property(nonatomic,retain) NSString *clientSecret;
@property(nonatomic,retain) NSString *redirectUri;
@property(nonatomic,assign) BOOL useRealTime;
+ (id) initInstance:(ATUrlType)_urlType;
+ (ATUrlRoot *)sharedInstance;
@end
