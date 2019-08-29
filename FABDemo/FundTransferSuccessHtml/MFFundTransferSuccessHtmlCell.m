//
//  MFChooseListCardCell.m
//  MFSDKUIThemeOne
//
//  Created by ActiveAI on 11/29/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "MFFundTransferSuccessHtmlCell.h"
#import "MFFundTransferSuccessHtmlModel.h"

@implementation MFFundTransferSuccessHtmlCell

-(CGFloat)calculateRowHeightForCardModel:(MFFundTransferSuccessHtmlModel *)cardModel;
{
    cardModel.rowHeight = 391;
    return cardModel.rowHeight;
}

-(void)updateStaticUIWithCardModel:(id)cardModel
{
    
}

-(void)updateUIWithCardModel:(MFFundTransferSuccessHtmlModel*)cardModel
{
    self.objTitle.textColor=UIColorFromRGB(46, 52, 205);
    self.bubbleContainerView.layer.cornerRadius = 18;
    self.bubbleContainerView.clipsToBounds = YES;
    self.objTitle.text = cardModel.ftTitle;
    self.objMessage.text = cardModel.ftMessage;
    self.objDebitAccountName.text = cardModel.ftDebitAccountName;
    self.objDebitAccountNumber.text = cardModel.ftDebitAccountNumber;
    self.objPayeeName.text = cardModel.ftPayeeName;
    self.objPayeeAccountNumber.text = cardModel.ftPayeeAccountNumber;
    self.objAmount.text = cardModel.ftAmount;
    self.objReferenceNumber.text = cardModel.ftReferenceNumber;
    self.objTime.text = [cardModel.ftDate stringByAppendingFormat:@" %@",cardModel.ftTime];
}
@end
