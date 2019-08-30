//
//  MFChooseListCardModel.m
//  MFSDKUIThemeOne
//
//  Created by ActiveAI on 11/29/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "MFFundTransferSuccessHtmlModel.h"

@implementation MFFundTransferSuccessHtmlModel

-(void)updateCardModelFromMessageDictionary:(NSDictionary*)messageDictionary
{
    NSDictionary *cardDict = [self getPayloadDictionary];
    self.ftTitle = cardDict[@"title"];
    self.ftMessage = cardDict[@"message"];
    self.ftDebitAccountName = cardDict[@"debitAccountName"];
    self.ftDebitAccountNumber = cardDict[@"debitAccountNumber"];
    self.ftPayeeName = cardDict[@"payeeName"];
    self.ftPayeeAccountNumber = cardDict[@"payeeAccountNumber"];
    self.ftAmount = [cardDict[@"currency"] stringByAppendingFormat:@" %@",cardDict[@"amount"]];
    self.ftReferenceNumber = cardDict[@"referenceNumber"];
    self.ftDate = cardDict[@"date"];
    self.ftTime = cardDict[@"time"];
}

-(NSArray*)getSpeechSuggestionsText;
{
    return nil;
}
@end
