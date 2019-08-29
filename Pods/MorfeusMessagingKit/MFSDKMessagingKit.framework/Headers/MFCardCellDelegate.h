//
//  MFCardCellDelegate.h
//  MFSDKChatUIKit
//
//  Created by ActiveAI on 1/20/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFCardCellDelegate <NSObject>
/**
 SDK will call this delegate, every time when the cell is about to be displayed in screen. We can update the label text, textView content, button text etc in this method, basically things that change when the cell is reused.
 
 @param cardModel The model corresponding to the cell
 */
-(void)updateUIWithCardModel:(id)cardModel;

/**
 SDK will call this delegate, to obtain the height needed to display the view.
 
 @param cardModel The model corresponding to the cell
 */
-(CGFloat)calculateRowHeightForCardModel:(id)cardModel;

@optional
/**
 SDK will call this delegate, only once when the cell is first time created. We can update fonts, color etc in this method, as they dont change when the cell is reused.

 @param cardModel The model corresponding to the cell
 */
-(void)updateStaticUIWithCardModel:(id)cardModel;

/**
 SDK will call this delegate, every time when there is an image download in progress. We can update the image download progress in this method. If this method is not implemented, then updateUIWithCardModel: will  be called.
 
 @param cardModel The model corresponding to the cell
 */
-(void)updateImageWithCardModel:(id)cardModel;
@end
