//
//  MFLocalizationManager.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 15/11/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFLocalizationManager : NSObject
+(NSString*)getLocalizedString:(NSString*)string;
+(NSString*)getLocalizedErrorStringForHttpResponse:(NSHTTPURLResponse*)httpResponse andError:(NSError*)error;
+(NSString*)getLocalizedErrorStringForErrorCode:(NSString*)errorMFCode;
+(NSString*)getLocalizedErrorStringForNoInternet;
+(NSString*)getLocalizedErrorStringForSSLCertificateError;
+(NSString*)getLocalizedErrorStringForSpeechAPIDown;
+(NSString*)getLocalizedErrorStringForEmptyMessages;
@end
