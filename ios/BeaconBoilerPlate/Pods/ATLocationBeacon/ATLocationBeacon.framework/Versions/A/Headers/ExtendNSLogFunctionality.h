//
//  ExtendNSLogFunctionality.h
//  ATLocationBeacon
//
//  Created by Sarra Srairi on 20/04/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifdef DEBUG
#define NSLog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define NSLog(x...)
#endif

void ExtendNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);@interface ExtendNSLogFunctionality : NSObject

@end
