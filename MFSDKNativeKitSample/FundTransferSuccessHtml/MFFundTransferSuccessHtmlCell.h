//
//  MFChooseListCardCell.h
//  MFSDKUIThemeOne
//
//  Created by ActiveAI on 11/29/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MFSDKMessagingKit/MFSDKMessagingKit.h>



@interface MFFundTransferSuccessHtmlCell : MFCardCell<MFCardCellDelegate>
@property(nonatomic,weak)IBOutlet UILabel *objTitle;
@property(nonatomic,weak)IBOutlet UILabel *objMessage;
@property(nonatomic,weak)IBOutlet UILabel *objDebitAccountName;
@property(nonatomic,weak)IBOutlet UILabel *objDebitAccountNumber;
@property(nonatomic,weak)IBOutlet UILabel *objPayeeName;
@property(nonatomic,weak)IBOutlet UILabel *objPayeeAccountNumber;
@property(nonatomic,weak)IBOutlet UILabel *objAmount;
@property(nonatomic,weak)IBOutlet UILabel *objReferenceNumber;
@property(nonatomic,weak)IBOutlet UILabel *objTime;
@end
