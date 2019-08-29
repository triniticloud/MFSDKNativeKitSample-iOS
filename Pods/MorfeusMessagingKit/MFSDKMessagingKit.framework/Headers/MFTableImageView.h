//
//  MFTableImageView.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 27/10/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFCardModel.h"

@interface MFTableImageView : UIImageView
@property(nonatomic,assign)BOOL shouldDisplaySpinner;
// TO_DO
-(void)downloadImageWithName:(NSString*)imageName url:(NSString*)imageUrl cardModel:(MFCardModel *)model;
-(void)uploadImageWithName:(NSString*)imageName url:(NSString*)imageUrl cardModel:(MFCardModel *)model;
-(void)downloadMultipleImageWithName:(NSString*)imageName url:(NSString*)imageUrl cardModel:(MFCardModel *)model;
@end
