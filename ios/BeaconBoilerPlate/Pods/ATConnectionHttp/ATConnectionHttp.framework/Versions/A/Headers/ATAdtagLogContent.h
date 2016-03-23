//
//  ATAdtagLogContent.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 16/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATLog.h"
#import "ATAdtagContent.h"
#import "ATAdtagLogDataLoadContent.h"
@interface ATAdtagLogContent : ATLog {

}
- (id)initWihAdtagContent:(ATAdtagContent *)adtagContent
                  subType:(ATLogSubtype)sub
               originLoad:(NSString *)origin
               feedStatus:(ATFeedStatus )_feedStatus;

- (id)initWihAdtagContent:(ATAdtagContent *)adtagContent
                  subType:(ATLogSubtype)sub
                     from:(NSString *) _from;
@end
