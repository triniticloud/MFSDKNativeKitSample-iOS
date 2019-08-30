//
//  MFChooseListCardModel.h
//  MFSDKUIThemeOne
//
//  Created by ActiveAI on 11/29/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MFSDKMessagingKit/MFSDKMessagingKit.h>


@interface MFFundTransferSuccessHtmlModel : MFCardModel<MFCardModelDelegate>
@property(nonatomic,strong)NSString *ftTitle;
@property(nonatomic,strong)NSString *ftMessage;
@property(nonatomic,strong)NSString *ftDebitAccountName;
@property(nonatomic,strong)NSString *ftDebitAccountNumber;
@property(nonatomic,strong)NSString *ftPayeeName;
@property(nonatomic,strong)NSString *ftPayeeAccountNumber;
@property(nonatomic,strong)NSString *ftAmount;
@property(nonatomic,strong)NSString *ftReferenceNumber;
@property(nonatomic,strong)NSString *ftDate;
@property(nonatomic,strong)NSString *ftTime;
@end
