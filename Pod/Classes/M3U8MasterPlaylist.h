//
//  M3U8MasterPlaylist.h
//  M3U8Kit
//
//  Created by Sun Jin on 3/25/14.
//  Copyright (c) 2014 Jin Sun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "M3U8ExtXStreamInfList.h"
#import "M3U8ExtXMediaList.h"

@interface M3U8MasterPlaylist : NSObject

@property (readonly, nonatomic, copy) NSString *originalText;
@property (readonly, nonatomic, strong) NSURL *baseURL;

@property (readonly, nonatomic, strong) M3U8ExtXStreamInfList *xStreamList;
@property (readonly, nonatomic, strong) M3U8ExtXMediaList *xMediaList;

- (instancetype)initWithContent:(NSString *)string baseURL:(NSURL *)baseURL;

- (instancetype)initWithContentOfURL:(NSURL *)URL error:(NSError **)error;

@end
