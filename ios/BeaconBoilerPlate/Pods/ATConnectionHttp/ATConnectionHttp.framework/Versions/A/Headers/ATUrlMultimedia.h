//
//  ATUrlMultimedia.h
//  ATConnectionHttp
//
//  Created by Sarra Srairi on 04/06/2015.
//  Copyright (c) 2015 R&D connecthings. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ATUrlMultimedia : NSObject{
    
    NSArray * IMAGES_EXTENSIONS;
    NSArray * VIDEOS_EXTENSIONS;
    NSArray * AUDIOS_EXTENSIONS;
}
@property (nonatomic , strong ) NSArray * IMAGES_EXTENSIONS;
@property (nonatomic , strong ) NSArray * VIDEOS_EXTENSIONS;
@property (nonatomic , strong ) NSArray * AUDIOS_EXTENSIONS;
- (instancetype)init; 
@end
