//
//  MFSDKMessagingManager.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 11/28/16.
//  Copyright © 2016 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MFSDKProperties.h"
#import "MFSDKSessionProperties.h"
#import "MFSDKLoginProperties.h"

#import "MFSDKCardUtilities.h" 

@interface MFSDKMessagingManager : NSObject
+ (instancetype)sharedInstance;
+ (void)resetSharedInstance;

-(void)initWithProperties:(MFSDKProperties *)sdkProperties;
-(id)showScreenWithBotID:(NSString*)botId fromViewController:(id)viewController;
-(id)showScreenWithBotID:(NSString*)botId fromViewController:(id)viewController withSessionProperties:(MFSDKSessionProperties*)properties;
-(void)closeConversationScreen;
-(void)logout;

+(BOOL)canUseTouchID;
-(void)registerTemplateMapping:(MFCardTemplateMapping*)templateMapping forCardTemplate:(NSString*)templateName;

//send message
//login

//+(void)callLoginAPIWithProperties:(MFSDKLoginProperties*)loginProperties response:(void (^)(NSDictionary *reponseDict, BOOL isSuccess))completionBlock;
@end
