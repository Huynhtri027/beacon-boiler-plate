//
//  NSUserDefaults.h
//  Pods
//
//  Created by sarra srairi on 21/01/2016.
//
// 2.3.5

#import <Foundation/Foundation.h>

@interface NSUserDefaults (NSUserDefaultsExtensions)

- (void)saveCustomObject:(id<NSCoding>)object
                     key:(NSString *)key;
- (id<NSCoding>)loadCustomObjectWithKey:(NSString *)key;

@end
