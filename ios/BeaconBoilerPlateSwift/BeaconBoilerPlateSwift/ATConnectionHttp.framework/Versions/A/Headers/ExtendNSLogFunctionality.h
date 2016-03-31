//
//  ExtendNSLogFunctionality.h
//  ATLocationBeacon
//
//  Created by Sarra Srairi on 20/04/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef enum {
    CTVerbose=0, CTDebug=1, CTInfo=2, CTWarning=3, CTError=4 } LoggerLevel;
//redefine NSLog Methode
#ifdef DEBUG
#define VLog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTVerbose,args);
#define DLog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTDebug,args);
#define ILog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTInfo,args);
#define WLog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTWarning,args);
#define ELog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTError,args);
#else
#define WLog(...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTWarning,args);
#define ELog(...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,CTError,args);
#define VLog(...)
#define DLog(...)
#define ILog(...)
#endif

void ExtendNSLog(const char *file, int lineNumber, const char *functionName,LoggerLevel level, NSString *format, ...);

@interface ExtendNSLogFunctionality : NSObject{

}

+(ExtendNSLogFunctionality*)getInstance;
@end
