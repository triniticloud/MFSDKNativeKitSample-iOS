 //
//  MFUIComponentProtocol.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 31/07/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFUIComponentProtocol <NSObject>
@optional
-(NSIndexPath*)getComponentIndexpath;
-(NSString*)getComponentTag;
-(void)setComponentTag:(NSString*)tag;
-(BOOL)getComponentAllowMultipleClicks;
-(BOOL)getComponentRadioLook;
-(void)disableComponent;
-(BOOL)isComponentEnabled;
@end
