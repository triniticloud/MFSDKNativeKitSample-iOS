//
//  MFSwipeCardModel.h
//  MFSDKMessagingKit
//
//  Created by Vinoth on 8/10/18.
//  Copyright © 2018 Ideas2IT. All rights reserved.
//

#import "MFCardModel.h"
#import "MFSwipeCardCollectionViewCell.h"

@interface MFSwipeCardModel : MFCardModel
@property(nonatomic, strong) NSArray *swipeCardDataSourceArray;
@property(nonatomic, assign) CGFloat swipeCardEachCellPreferredWidth;
@property(nonatomic, strong) MFSwipeCardCollectionViewCell *swipeCardEachCell;
@property(nonatomic, strong) UINib *swipeCardEachCellNib;
@property(nonatomic, strong) NSString *swipeCardEachCellNibName;
@end
