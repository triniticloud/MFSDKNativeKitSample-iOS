//
//  MFChatUtilities.h
//  Morfeus-Chat
//
//  Created by ActiveAI on 1/11/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AVAsset;

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define UIColorFromAlphaWithHex(hexValue) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:((float)((hexValue & 0xFF000000) >> 24))/255.0]
#define SWIPE_WIDTH 272

#define UIColorFromHexWithAlpha(hexValue,a) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:a]
#define UIColorFromHex(hexValue) UIColorFromHexWithAlpha(hexValue,1.0)
#define UIColorFromRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorFromRGB(r,g,b) UIColorFromRGBA(r,g,b,1.0)

@interface MFChatUtilities : NSObject
+ (BOOL)isWifiAvailable;
+(CGFloat)getProportionalWidthForValue:(CGFloat)value;
+ (NSBundle *)messagingBundle;
+ (NSBundle *)themeBundle;
+ (NSBundle *)mainBundle;
+(CGSize)getSizeForLabelWithText:(NSString*)text withMaxWidth:(CGFloat)maxWidth withFont:(UIFont*)font;
//+(CGSize)getBubbleSizeFromTheList:(NSArray*)arrayFloat withWidthPadding:(CGFloat)width withHeightPadding:(CGFloat)height;
+(BOOL)fileExistsInMainThenUIBundle:(NSString *)fileName;
+(BOOL)imageExistsInMainOrInsideBundle:(NSString *)fileName;
+(UIImage *)getProperImageFromMainOrInsideBundle:(NSString*)imgName;
+(UIImage *)getProperImageFromMainThenBundle:(NSString*)imgName bundle:(NSBundle*)bundle;
+(NSURL *)getProperResourceFromMainOrThemeOrMessagingBundle:(NSString*)resourceName withExtension:(NSString*)extension;
+(BOOL)isValidHexColorString:(NSString*)hexString;
+(UIColor*)getUIColorFromHexString:(NSString*)hexString;
+(CGFloat)getFloatAtIndex:(NSInteger)index separatedBy:(NSString*)separation fromString:(NSString*)string;
+(NSString*)getStringAtIndex:(NSInteger)index separatedBy:(NSString*)separation fromString:(NSString*)string;
+(BOOL)isValidData:(NSString *)string;
+(NSString*)trimString:(NSString *)string;
+ (NSString *)getUTCStringfromUTCDate:(NSDate *)date format:(NSString *)format;
+ (NSDate *)getUTCDatefromUTCString:(NSString *)dateStr format:(NSString *)format;
+ (NSString *)getLocalStringfromLocalDate:(NSDate *)date format:(NSString *)format;
+ (NSDate *)getLocalDatefromLocalString:(NSString *)dateStr format:(NSString *)format;
+ (NSDate *)getUTCDateFromLocalDate:(NSDate *)date;
+ (NSDate *)getLocalDateFromUTCDate:(NSDate *)date;
+ (NSString *)getLocalStringFromUTCString:(NSString *)utcString localFormat:(NSString*)localFormat utcFormat:(NSString*)utcFormat shouldFormatRelatively:(BOOL)relative;
+ (NSString *)getUTCStringFromLocalString:(NSString *)localString utcFormat:(NSString*)utcFormat localFormat:(NSString*)localFormat;
+ (NSDate *)getUTCDatefromLocalString:(NSString *)dateStr format:(NSString *)format;
+ (NSString *)getUTCStringfromLocalDate:(NSDate *)date format:(NSString *)format;
+ (NSString *)getLocalStringFromUTCDate:(NSDate *)date format:(NSString *)format;
+ (NSDate *)truncateSecondsForDate:(NSDate *)fromDate;
+ (UIColor*)defaultSystemTintColor;
+(NSAttributedString*)getAttributedStringWithText:(NSString*)text prependImage:(UIImage*)img withX:(CGFloat)x withY:(CGFloat)y withWidth:(CGFloat)width withHeight:(CGFloat)height;
+(NSAttributedString*)getAttributedStringWithText:(NSString*)text appendImage:(UIImage*)img withX:(CGFloat)x withY:(CGFloat)y;
+(NSTextAlignment)getUIAlignmentFromString:(NSString*)string;

+ (void)maskView:(UIView *)view withImage:(UIImage *)image withBounds:(CGRect)maskbounds;
+ (void)maskView:(UIView *)view withImage:(UIImage *)image;
+ (void)maskViewAtTop:(UIView *)view withImage:(UIImage *)image;
+ (void)maskViewAtBottom:(UIView *)view withImage:(UIImage *)image;
+(NSDictionary *)convertJSONStringToDictionary:(NSString *)inputData;
+(NSString *)convertDictionaryToJSONString:(NSDictionary *)inputData;

+(UIImage *)scaleImage:(UIImage*)image toSize:(CGSize)newSize;
+(UIImage*)previewImageFromVideoAsset:(AVAsset*)asset;

+(BOOL)isMorfeusHTMLString:(NSString*)HTMLstring;
+(NSString*)stripedStringFromPossibleHTML:(NSString*)html;
+(NSAttributedString *)attributedStringWithPossibleHTML:(NSString *)HTML withFont:(UIFont*)font withFontColor:(NSString*)hexColor withDefaultFontColor:(NSString*)defaultHexColor shouldCenterAlign:(BOOL)shouldCenterAlign;
+(UIColor*)getColorFromPrimary:(UIColor*)color01 secondary:(UIColor*)color02;
+(NSString*)getRandomFileNameWithExtension:(NSString*)extension;
+(void)showAlertInVC:(UIViewController*)vc withTitle:(NSString*)title withDescription:(NSString*)description titleOne:(NSString*)titleOne titleTwo:(NSString*)titleTwo titleOneHandler:(void (^ __nullable)(UIAlertAction *action))handlerOne titleTwoHandler:(void (^ __nullable)(UIAlertAction *action))handlerTwo;
+(CGFloat)getProportionalWidthFor375:(CGFloat)value;
+(CGFloat)getProportionalWidthFor320:(CGFloat)value;
+(CGFloat)getProportionalWidth:(CGFloat)value forDeviceWidth:(CGFloat)width;
@end
