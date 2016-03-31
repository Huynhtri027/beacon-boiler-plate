//
//  ATAdtagLogDataLoadContent.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 18/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATAdtagLogDataContent.h"
@interface ATAdtagLogDataLoadContent : ATAdtagLogDataContent {
   
    NSString *searchKey;
    NSString *loadOrigin;
    NSString *feedStatus;
}

@property(nonatomic,retain) NSString *loadOrigin;
@property(nonatomic,retain) NSString *searchKey;
@property(nonatomic,retain) NSString *feedStatus;


- (id)initWihAdtagContent:(ATAdtagContent *)adtagContent
                  subType:(ATLogSubtype)sub
                     from:(NSString *) _from;

- (id)initWihAdtagContent:(ATAdtagContent *)adtagContent
                  subType:(ATLogSubtype)sub
               originLoad:(NSString *)origin
               feedStatus:(ATFeedStatus )_feedStatus;
@end
