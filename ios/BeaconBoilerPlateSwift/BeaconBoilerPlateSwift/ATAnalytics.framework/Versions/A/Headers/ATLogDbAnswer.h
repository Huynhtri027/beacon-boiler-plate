//
//  LogDbAnswer.h
//  Pods
//
//  Created by Sarra Srairi on 07/04/2015.
//
//

#import <Foundation/Foundation.h>

@interface ATLogDbAnswer : NSObject{
    NSArray *logs;
    NSArray *ids;
}
@property(nonatomic,retain) NSArray *logs;
@property(nonatomic,retain) NSArray *ids;
- (instancetype)initWithLogs:(NSArray *)_logs
                         ids:(NSArray *) _ids;

@end
