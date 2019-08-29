//
//  MFSDKLoginProperties.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 29/06/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFSDKLoginProperties : NSObject
@property(nonatomic,strong)NSString *requestId;
@property(nonatomic,strong)NSDictionary *authParameters;
@property(nonatomic,assign)BOOL isSuccess;
@end
