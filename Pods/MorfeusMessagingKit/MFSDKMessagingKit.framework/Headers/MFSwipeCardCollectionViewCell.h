//
//  MFSwipeCardCollectionViewCell.h
//  MFSDKMessagingKit
//
//  Created by ActiveAI on 08/09/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFCardModel.h"
#import "MFCardCellDelegate.h"
#import "MFSwipeCardCellDelegate.h"
#import "MFTableImageView.h"
#import "MFActionModel.h"

#define BUBBLE_BTN_H 45
#define IMAGE_H 161

@interface MFSwipeCardCollectionViewCell : UICollectionViewCell<MFCardCellDelegate,MFSwipeCardCellDelegate>
{
    UIView *indicatorView;
    UIActivityIndicatorView *indicatorBg;
}
@property(nonatomic,weak)IBOutlet UIView *containerView;
//@property(nonatomic,weak)IBOutlet MFSpinnerView *spinnerProgress;
@property(nonatomic,weak)IBOutlet MFTableImageView *imgViewOne;
@property(nonatomic,weak)IBOutlet NSLayoutConstraint *imageContainerHeight;
@property (weak, nonatomic) id cellsCollectionView;
@property (weak, nonatomic) id cellsTableCell;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageContainerWidth;
-(MFCardModel*)getCardModelForIndexpath:(NSIndexPath *)indexpath;
-(void)notifyIndexOfLoader:(NSIndexPath*)indexPath;
-(void)loadSpinnerOnView:(UIView *)cardtopView;
-(BOOL)onVoiceAction:(MFSpeechIntent *)intent;
-(BOOL)shouldDisplaySpinnerForActionModel:(MFActionModel *)actionModel;
    
@property(nonatomic,weak)IBOutlet NSLayoutConstraint *swipeCellWidth;
@end
