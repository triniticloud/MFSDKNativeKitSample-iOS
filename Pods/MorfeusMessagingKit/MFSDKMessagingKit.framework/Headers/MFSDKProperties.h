//
//  MFSDKProperties.h
//  MFSDKCoreKit
//
//  Created by ActiveAI on 1/30/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MFSDKLoginProperties;

typedef void (^MFLoginBlock)(MFSDKLoginProperties *loginProperties);

@protocol MFSDKMessagingDelegate <NSObject>
@optional
/**
 There are situations where Main app screens appearing above Morfeus SDK. During such cases, Morfeus SDK calls this delegate to understand whether or not to maintain its session
 
 @return To keep morfeus SDK active, return YES, otherwise NO.
 */
-(BOOL)keepMorfeusSDKSessionAlive;

//-(void)keepMainAppAlive;

/**
 Main app will write the necessary implementation to keep itself alive
 */
-(void)keepExternalAppSessionAlive;

/**
 When a push notification displayed by apple OS is tapped, Morfeus SDK will call this method. Developer will write the code to present the chat view controller

 @param launchoptions The launchoptions passed on application launch
 */
-(void)onPushClick:(NSDictionary*)launchoptions;

/**
On every server response, we will call this method, If the return dictionary is nil, then we will use the original dictionary(responseDict). This method allows a chance for client to modify the response in client.

 @param responseDict The original dictionary that got parsed as server response
 @return The dictionary to use for displaying card in chat screen
 */
-(NSDictionary*)onServerResponse:(NSDictionary*)responseDict;

/**
 This delegate will be called, when external login is requested. The main application can implement this method and present a view controller to handle external login.

 @param topViewController The view controller currently at the top in Morfeus SDK.
 @param requestId Unique id to identify the request
 @param completionBlock The completion block to be called once the external login scenario is handled.
 @return Return YES, if handling external login, otherwise NO, returning NO displays internal login.
 */
-(BOOL)onAuthenticateRequest:(UIViewController *)topViewController requestId:(NSString*)requestId completionBlock:(MFLoginBlock)completionBlock;

-(BOOL)presentExternalScreen:(UIViewController *)topViewController withPayload:(NSDictionary*)payload;

@end

@interface MFSDKProperties : NSObject
@property(nonatomic,assign)NSInteger inactivityTimeout;//default 5 min

@property(nonatomic,strong)NSString *deviceToken;
@property(nonatomic,strong)NSString *domain;
@property(nonatomic,strong)NSString *googleVoiceKey;
@property(nonatomic,strong)NSString *nuanceKey;
@property(nonatomic,strong)NSString *userdefaultsSuiteName;


/**
 This should be complete NSBundle path for xib and resources in NSString form
 If resources are added as a separate framework, then we can assign as [NSBundle bundleWithIdentifier:@"com.theme.bundle"].bundlePath
 If resources are added in main bundle, then we can assign as [NSBundle mainBundle].bundlePath
 */
@property(nonatomic,strong)NSString *themeBundlePath;

@property(nonatomic,assign)BOOL hasTouchId;
@property(nonatomic,assign)BOOL shouldAllowMultipleMessages;
@property(nonatomic,assign)BOOL isSupportMultiLanguage;

@property(nonatomic,assign)BOOL enableSSL;
@property(nonatomic,assign)BOOL hideContentInBackground;
@property(nonatomic,assign)BOOL enableRootedDeviceCheck;

@property(nonatomic,assign)BOOL enableAnalytics;
@property(nonatomic,assign)BOOL enableAutoSuggestion;
@property(nonatomic,assign)BOOL enableBackSpaceSuggestion;
@property(nonatomic,assign)NSInteger maxAutoSuggestion;
-(void)setAutoSuggestionThresholdByWord:(NSInteger)wordCount byChar:(NSInteger)charCount;

@property(nonatomic,assign)NSInteger noOfWordsToStartSearch;
@property(nonatomic,assign)NSInteger noOfCharactersToStartSearch;

@property(nonatomic,strong)NSString *googleLocationKey;
-(void)seTheThemeBundlePath:(NSString *)themeBundlePath;
@property(nonatomic,weak)id <MFSDKMessagingDelegate> messagingDelegate;

/**
 Initialization method

 @param domainUrl The endpoint URL to send request
 @return A new instance of MFSDKProperties
 */
-(instancetype)initWithDomain:(NSString*)domainUrl;

/**
 To add a botID to Morfeus SDK

 @param botId The unique id to identify the bot
 @param botName This will be displayed as title, when the bot's chat is opened
 */
-(void)addBot:(NSString*)botId botName:(NSString*)botName;
-(NSString*)getCurrentBotName;
@end
