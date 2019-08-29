//
//  MFCardStyle.h
//  MFSDKUIKit
//
//  Created by ActiveAI on 23/12/16.
//  Copyright © 2016 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface MFCardStyle : NSObject
-(void)loadDefaultStyleProperties:(NSDictionary *)styles;
-(void)loadUserStyleProperties:(NSDictionary *)styles;

-(UIImage*)getImageForReadMessage;
-(UIColor*)getTextColor;
-(NSString*)getTextColorString;
-(UIColor*)getBorderColor;
-(UIColor*)getBackgroundColor;
-(UIImage*)getImage;
-(NSString*)getPosition;
-(BOOL)isConsecutive;
-(UIColor*)getTimeColor;
-(UIColor*)getSenderColor;
-(UIColor*)getFillColor;
-(UIColor*)getStrokeColor;
@end
