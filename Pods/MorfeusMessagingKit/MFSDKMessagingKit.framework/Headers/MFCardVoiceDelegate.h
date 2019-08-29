//
//  MFCardVoiceDelegate.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 16/11/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MFSpeechIntent;

@protocol MFCardVoiceDelegate <NSObject>
@optional
-(BOOL)onVoiceAction:(MFSpeechIntent *)intent;
-(NSArray*)getSpeechSuggestionsText;
@end
