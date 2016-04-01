//
//  DBManager.h
//  AdTagLog
//
//  Created by Sarra Srairi on 10/02/2015.
//  Copyright (c) 2015 ct. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ATConnectionHttp/ATConnectionHttp.h>
#import "ATLogDbAnswer.h"

@interface ATDbLogManager : NSObject{
    NSString *databasePath;
  
}

+(ATDbLogManager*)getSharedInstance;
- (BOOL)createDB;
- (void)saveData:(ATLog *)log;
- (void)deleteLogs:(NSArray *)iDS;
- (ATLogDbAnswer *) getLogOrdredByDate:(int)maxElement;
- (int)getCount;
-(void)deleteAllLogs;
@end
