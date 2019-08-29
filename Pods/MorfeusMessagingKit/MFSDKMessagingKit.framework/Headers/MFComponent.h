//
//  MFComponent.h
//  MFSDKMessengerKit
//
//  Created by ActiveAI on 22/12/16.
//  Copyright © 2016 ActiveAI. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface MFComponent : NSObject

@property (nonatomic,strong) NSString *mfType;
@property (nonatomic,strong) NSMutableDictionary *mfProperties;
@property (nonatomic,strong) NSMutableDictionary *mfStyles;


-(void)setProperty:(NSString *)key value:(NSString *)value;
-(void)setStyle:(NSString *)key value:(NSString *)value;

-(NSString *)getProperty:(NSString *)key;
-(NSString *)getStyle:(NSString *)key;

- (instancetype)initWithDictionary:(NSDictionary*)dict;
- (instancetype)initWithStyleDictionary:(NSDictionary*)dict;

-(BOOL)isComponentEnabled;
-(NSString*)getPayload;
-(BOOL)allowMultipleClicks;
-(BOOL)isRadio;
-(BOOL)isRadioListCard;
-(BOOL)allowMultipleClicksListCard;

-(NSString*)getText;
-(NSDictionary*)getProperties;

@end
