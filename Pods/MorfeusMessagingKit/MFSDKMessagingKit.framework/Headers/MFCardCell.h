//
//  MFCardCell.h
//  Morfeus-Chat
//
//  Created by ActiveAI on 1/10/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//
#import "MFCardCell.h"
#import "MFChatUtilities.h"
#import "MFCardCellDelegate.h"
#import "MFCardVoiceDelegate.h"
@class MFSpeechIntent;
@class MFCardModel;

@interface MFCardCell : UITableViewCell <MFCardVoiceDelegate>
@property(nonatomic,weak)IBOutlet UIImageView *bubbleAvatarImgView;
@property(nonatomic,weak)IBOutlet UIImageView *bubbleAvatarImgViewTop;
@property(nonatomic,weak)IBOutlet UIImageView *bubbleAvatarImgViewCenter;

@property(nonatomic,weak)IBOutlet UIImageView *bubbleBgImgView;
@property(nonatomic,weak)IBOutlet UIView *bubbleContainerView;
@property(nonatomic,weak)IBOutlet UIView *bubbleMaskView;
@property(nonatomic,weak)IBOutlet UIImageView *messageStatusImgView;

//@property(nonatomic,weak)IBOutlet MFSpinnerView *spinnerProgress;
@property(nonatomic,strong) UIButton *rowButton;
@property(nonatomic,strong) NSIndexPath *spinnerActiveIndexPath;

-(MFCardModel*)getCardModelForIndexpath:(NSIndexPath *)indexpath;
+(void)reloadCellForIndexpath:(NSIndexPath *)indexpath;
+(void)reloadImageForIndexpath:(NSIndexPath *)indexpath;
-(void)loadSpinnerOnView:(UIView *)cardtopView;
-(void)stopSpinnerFromview;
-(CGFloat)maxWidth;
-(CGFloat)totalPaddingVertical;
-(void)notifyIndexOfLoader:(NSIndexPath*)indexPath;
-(void)hideIncomingBotImage;

@property(nonatomic,weak)IBOutlet NSLayoutConstraint *bubbleWidthConstraint;
@property(nonatomic,weak)IBOutlet NSLayoutConstraint *bubbleLeftConstraint;

@property (strong, nonatomic) IBOutletCollection(NSLayoutConstraint) NSArray *paddingVertical;
@property (strong, nonatomic) IBOutletCollection(NSLayoutConstraint) NSArray *paddingHorizontal;
-(void)updateWithTableView:(UITableView*)tblView controller:(UIViewController*)controller indexPath:(NSIndexPath*)indexPath;

-(BOOL)onVoiceAction:(MFSpeechIntent *)intent;
@property(nonatomic,weak) IBOutlet UILabel *msgTimeLbl;
-(id)currentCardModel;
-(UITableView*)currentTableView;
-(UIViewController*)currentController;
-(void)showTypingIndicator;
-(void)hideTypingIndicator;
-(BOOL)displayReachabilitySuccess;
-(void)disableButtonsAll;
-(void)disableButton;

-(NSInteger)getDefaultBotImageWidth;
-(NSInteger)getDefaultBotImageHeight;
@end
