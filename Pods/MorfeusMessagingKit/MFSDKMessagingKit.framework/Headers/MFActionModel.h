//
//  MFActionModel.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 05/09/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFCardModel.h"

@interface MFActionModel : NSObject
@property(nonatomic,strong)NSString *action;
@property(nonatomic,strong)id payload;
@property(nonatomic,strong)MFCardModel *selectedCardModel;
@property(nonatomic,assign)NSInteger disableButtonIndex;

- (instancetype)initWithAction:(NSString*)action payload:(NSString*)payload;
- (instancetype)initWithPayloadDict:(NSDictionary*)payload;
- (instancetype)initWithPayloadDict:(NSDictionary*)payload withParameters:(NSString*)parameters;
-(BOOL)shouldDisplaySpinner;
-(BOOL)isShowInfo;
-(void)performAction;
+(void)handleDislikeActionForIndexPath:(NSIndexPath*)indexPath;
+(void)handleLikeActionForIndexPath:(NSIndexPath*)indexPath;
@end
