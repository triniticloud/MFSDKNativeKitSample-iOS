//
//  MFCardTemplateMapping.h
//  MFSDKChatUIKit
//
//  Created by ActiveAI on 2/17/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFCardTemplateMapping : NSObject
@property(nonatomic,strong)NSString *incomingCellNibName;
@property(nonatomic,strong)NSString *outgoingCellNibName;

@property(nonatomic,strong)NSString *cellNibName;
@property(nonatomic,strong)NSString *cellModelName;

//@property(nonatomic,strong)NSString *swipeCardEachCellNibName;
@property(nonatomic,assign)BOOL isListCard;
@property(nonatomic,assign)BOOL isExternalCard;
@end
