//
//  APIHandle.h
//  CallBack
//
//  Created by LiBinggen on 15/9/7.
//  Copyright (c) 2015年 qingqing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APIInterface.h"
#import "APIParamSourceInterface.h"
#import "APICallbackInterface.h"
#import "PostHelperInterface.h"

@interface APIHandle : NSObject<APIInterface>
@property (nonatomic, strong) NSMutableData *receiveData;
@property (nonatomic, weak) id<APIParamSourceInterface> paramSourceHandle;
@property (nonatomic, weak) id<APICallbackInterface> callbackHandle;
@property (nonatomic, weak) id<PostHelperInterface> postHelper;
-(NSArray *)handleList:(NSArray *)list;
@end
