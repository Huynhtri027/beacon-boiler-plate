//
//  Constants.h
//  AdTagHttpConnections
//
//  Created by Sarra Srairi on 02/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#import <Foundation/Foundation.h>

@interface ATConnectionConstants : NSObject
// Const Local Platform URL (iniliazing in UrlRoot)
FOUNDATION_EXPORT NSString *const RootLocal;
FOUNDATION_EXPORT NSString *const RootStaticLocal;
FOUNDATION_EXPORT NSString *const ClientIdLocal;
FOUNDATION_EXPORT NSString *const clientSecretLocal;
FOUNDATION_EXPORT NSString *const redirectUriLocal;
// Const Alpha Platform URL (iniliazing in UrlRoot)
FOUNDATION_EXPORT NSString *const RootAlpha;
FOUNDATION_EXPORT NSString *const RootStaticAlpha;
FOUNDATION_EXPORT NSString *const ClientIDAlpha;
FOUNDATION_EXPORT NSString *const clientSecretAlpha;
FOUNDATION_EXPORT NSString *const redirectUriAlpha;
// Const PreProd Platform URL (iniliazing in UrlRoot)
FOUNDATION_EXPORT NSString *const RootPrProd;
FOUNDATION_EXPORT NSString *const RootStaticPrProd;
FOUNDATION_EXPORT NSString *const ClientIDPrProd;
FOUNDATION_EXPORT NSString *const clientSecretPrProd;
FOUNDATION_EXPORT NSString *const redirectUriPrProd;
// Const Prod Platform URL (iniliazing in UrlRoot)
FOUNDATION_EXPORT NSString *const RootProd;
FOUNDATION_EXPORT NSString *const RootStaticProd;
FOUNDATION_EXPORT NSString *const ClientIDProd;
FOUNDATION_EXPORT NSString *const clientSecretProd;
FOUNDATION_EXPORT NSString *const redirectUriProd;
// Const ITG Platform URL (iniliazing in UrlRoot)
FOUNDATION_EXPORT NSString *const RootItg;
FOUNDATION_EXPORT NSString *const RootStaticItg;
FOUNDATION_EXPORT NSString *const ClientIDItg;
FOUNDATION_EXPORT NSString *const clientSecretItg;
FOUNDATION_EXPORT NSString *const redirectUriItg;
// Const User Information (iniliazing in AdUser)
FOUNDATION_EXPORT NSString *const LoginUser;
FOUNDATION_EXPORT NSString *const PassUser;
FOUNDATION_EXPORT NSString *const LoginUserPreProd;
FOUNDATION_EXPORT NSString *const PassUserPreProd;
FOUNDATION_EXPORT NSString *const LoginUserLocal;
FOUNDATION_EXPORT NSString *const PassUserLocal;
//Const Grant_password Type
FOUNDATION_EXPORT NSString *const CT_Password;
FOUNDATION_EXPORT NSString *const CT_authorization_code;
FOUNDATION_EXPORT NSString *const CT_service_auth;
FOUNDATION_EXPORT NSString *const CT_service_confirm;
FOUNDATION_EXPORT NSString *const CT_refresh_token;
FOUNDATION_EXPORT NSString *const LIB_VERSION_CONST;

@end
