//

//  MFSDKChatUIKit
//
//  Created by ActiveAI on 2/17/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "MFTextCardModel_Cus.h"

@implementation MFTextCardModel_Cus
-(void)updateCardModelFromMessageDictionary:(NSDictionary*)messageDictionary
{
    NSDictionary *cardDict = [self getMessageDictionary];
    self.text = cardDict[@"text"];
    if (!self.text && cardDict)
    {
        self.text = [MFChatUtilities convertDictionaryToJSONString:cardDict];
    }
    self.textIntentName = self.intentName;
    self.intentDisable = NO;//initally NO
}
@end
