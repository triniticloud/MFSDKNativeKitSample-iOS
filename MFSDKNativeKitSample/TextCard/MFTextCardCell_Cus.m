//

//  Morfeus-Chat
//
//  Created by ActiveAI on 1/10/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "MFTextCardCell_Cus.h"
#import "MFTextCardModel_Cus.h"

@implementation MFTextCardCell_Cus

-(void)updateUIWithCardModel:(id)cardModel
{
    MFTextCardModel_Cus *model = (MFTextCardModel_Cus*)cardModel;
    //self.bubbleBgImgView.layer.cornerRadius = 20;
    self.lblOne.text = model.text;
    [self.lblOne setDataDetectorTypes: UIDataDetectorTypeNone];
    NSString *msgTime = [MFChatUtilities getLocalStringFromUTCDate:model.messageTime format:@"hh:mm a"];
    NSString *defaultFontColor = @"#ffffff";
    if (model.isIncoming)
    {
        defaultFontColor = @"#000000";
    }
    if (msgTime)
    {
        if (model.isOutgoing)
        {
            self.msgTimeLbl.attributedText = [MFChatUtilities getAttributedStringWithText:msgTime appendImage:[UIImage imageNamed:@"tickmark" inBundle:[NSBundle bundleForClass:[self class]] compatibleWithTraitCollection:nil] withX:0 withY:0];
        }
        else
        {
            self.msgTimeLbl.attributedText = [[NSAttributedString alloc]initWithString:[MFChatUtilities getLocalStringFromUTCDate:model.messageTime format:@"hh:mm a"]];
        }
    }
    
    NSAttributedString *attributedString = [MFChatUtilities attributedStringWithPossibleHTML:model.text withFont:self.lblOne.font withFontColor:nil withDefaultFontColor:defaultFontColor shouldCenterAlign:NO];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.lineSpacing = 4.f;
    NSDictionary *attributtes = @{NSParagraphStyleAttributeName : paragraphStyle};
    NSMutableAttributedString *mutableString = [[NSMutableAttributedString alloc]initWithAttributedString:attributedString];
    [mutableString addAttributes:attributtes range:NSMakeRange(0, attributedString.length)];
    self.lblOne.attributedText = mutableString;
    
    if (model.isIncoming)
    {

    if ([model.intentName isEqualToString:@"faq"])
    {
        self.faqBarView.hidden = NO;
        self.faqBarBottomPadding.constant = 64;
        if (model.intentDisable)
        {
            self.likeButton.enabled = NO;
            self.dislikeButton.enabled = NO;
        }
        else
        {
            self.likeButton.enabled = YES;
            self.dislikeButton.enabled = YES;
        }
    }
    else
    {
        self.faqBarView.hidden = YES;
        self.faqBarBottomPadding.constant = 36;
    }
    }
}

-(CGFloat)calculateRowHeightForCardModel:(MFCardModel *)cardModel;
{
    MFTextCardModel_Cus *model = (MFTextCardModel_Cus*)cardModel;
    NSString *titleText = model.text;
    CGFloat lblHeight = 2;
    if (titleText)
    {
        if ([MFChatUtilities isMorfeusHTMLString:titleText])
        {
            titleText = [MFChatUtilities stripedStringFromPossibleHTML:titleText];
        }
    }
    CGSize labelSize = (CGSize){SCREEN_WIDTH-87, FLT_MAX};
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.lineSpacing = 4.f;
    NSDictionary *attributtes = @{NSParagraphStyleAttributeName : paragraphStyle,NSFontAttributeName:self.lblOne.font};
    CGRect lblContentRect = [titleText boundingRectWithSize:labelSize options:(NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading) attributes:attributtes context:nil];
    if (model.isIncoming)
    {
        if ([MFChatUtilities isValidData:model.intentName] && [model.intentName isEqualToString:@"faq"])
        {
            lblHeight += (64);
        }
        else
        {
            lblHeight += (36);
        }
    }
    cardModel.rowHeight = lblContentRect.size.height + lblHeight + [self totalPaddingVertical];

    return cardModel.rowHeight;
}

- (IBAction)dislikeButton:(id)sender
{
    if ([self displayReachabilitySuccess])
    {
        NSIndexPath *hitIndexPath;
        if (self.currentTableView)
        {
            CGPoint hitPoint = [sender convertPoint:CGPointZero toView:self.currentTableView];
            hitIndexPath = [self.currentTableView indexPathForRowAtPoint:hitPoint];
        }
        [MFActionModel handleDislikeActionForIndexPath:hitIndexPath];
    }
}

- (IBAction)likeAction:(id)sender
{
    if ([self displayReachabilitySuccess])
    {
        NSIndexPath *hitIndexPath;
        if (self.currentTableView)
        {
            CGPoint hitPoint = [sender convertPoint:CGPointZero toView:self.currentTableView];
            hitIndexPath = [self.currentTableView indexPathForRowAtPoint:hitPoint];
        }
        [MFActionModel handleLikeActionForIndexPath:hitIndexPath];
    }
}

@end
