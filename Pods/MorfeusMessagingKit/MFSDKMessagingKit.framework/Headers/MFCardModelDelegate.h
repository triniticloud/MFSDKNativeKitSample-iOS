//
//  MFCardModelDelegate.h
//  MFSDKChatUIKit
//
//  Created by ActiveAI on 1/20/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFCardModelDelegate <NSObject>
/**
 SDK will call this delegate with the server response, so that the model can initialize its properties

 @param messageDictionary The server response as a NSDictionary
 */
-(void)updateCardModelFromMessageDictionary:(NSDictionary*)messageDictionary;

@optional
-(NSArray*)getArrayOfSwipeCardModel;
@end
