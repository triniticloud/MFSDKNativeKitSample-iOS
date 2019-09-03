//

//  Morfeus-Chat
//
//  Created by ActiveAI on 1/10/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//
#import "INTextView.h"
#import <MFSDKMessagingKit/MFSDKMessagingKit.h>


@interface MFTextCardCell_Cus : MFCardCell<MFCardCellDelegate>
- (IBAction)dislikeButton:(id)sender;
@property(nonatomic,weak)IBOutlet INTextView *lblOne;
@property(nonatomic,weak)IBOutlet UIView *faqBarView;
@property (weak, nonatomic) IBOutlet UIButton *likeButton;
@property(nonatomic,weak)IBOutlet NSLayoutConstraint *faqBarBottomPadding;
@property (weak, nonatomic) IBOutlet UIButton *dislikeButton;
- (IBAction)likeAction:(id)sender;
@end
