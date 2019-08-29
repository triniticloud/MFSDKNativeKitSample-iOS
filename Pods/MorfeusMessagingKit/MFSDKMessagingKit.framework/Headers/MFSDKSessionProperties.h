//
//  MFSDKProperties.h
//  MFSDKCoreKit
//
//  Created by ActiveAI on 1/30/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, MFScreen) {
    MFScreenMessage,
    MFScreenVoice,
    MFScreenMessageVoice
};

@interface MFSDKSessionProperties : NSObject
@property(nonatomic,strong)NSDictionary *pushData;
@property(nonatomic,strong)NSDictionary *sessionData;
@property(nonatomic,strong)NSString *language;
@property(nonatomic,strong)NSString *applicationId;
@property(nonatomic,strong)NSString *customerId;
@property(nonatomic,assign)MFScreen screenToDisplay;

-(void)updateSessionWithApplicationId:(NSString*)applicationId customerId:(NSString*)customerId sessionData:(NSDictionary*) sessionData;
@end
