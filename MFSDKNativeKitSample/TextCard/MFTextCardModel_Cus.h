//

//  MFSDKChatUIKit
//
//  Created by ActiveAI on 2/17/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <MFSDKMessagingKit/MFSDKMessagingKit.h>

@interface MFTextCardModel_Cus : MFCardModel
@property(nonatomic,strong)NSString *text;
@property(nonatomic,strong)NSString *textIntentName;
@property(nonatomic,assign)BOOL intentDisable;
@end
