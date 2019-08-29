//
//  MFSwipeCardCellDelegate.h
//  MFSDKMessagingKit
//
//  Created by Vinoth on 4/27/18.
//  Copyright © 2018 Ideas2IT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MFSwipeCardCellDelegate <NSObject>
//swipe cell
-(void)updateUIWithCardModel:(id)cardModel withIndexPath:(NSIndexPath*)indexPath;
-(void)updateImageWithCardModel:(id)cardModel withIndexPath:(NSIndexPath*)indexPath;
-(CGSize)getSizeForDataModel:(id)cardModel forMaxWidth:(CGFloat)width;
@end
