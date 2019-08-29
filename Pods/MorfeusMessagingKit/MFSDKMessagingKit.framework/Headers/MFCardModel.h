//
//  MFCardModel.h
//  Morfeus-Chat
//
//  Created by ActiveAI on 1/10/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "MFChatUtilities.h"
#import "MFCardModelDelegate.h"
#import "MFCardVoiceDelegate.h"
#import "MFCardStyle.h"
#import "MFComponent.h"

@class MFCardCell;
@class MFCardModel;
@class MFCardFactory;
@class MFIndexedCollectionView;
@class MFChatContentViewController;

typedef NS_ENUM(NSInteger,MessageStatus)
{
    MessageStatusSending,
    MessageStatusSent,
    MessageStatusDelivered,
    MessageStatusRead,
};

#define kDisableClickedButtons NO
#define kmfTemplate     @"kmfTemplate"
#define kmfTVCell       @"kmfTVCell"
#define kmfTVCellOut    @"kmfTVCellOut"
#define kmfTVCellIn     @"kmfTVCellIn"
#define kmfTVModel      @"kmfTVModel"
#define kmfSVCell       @"kmfSVCell"
#define kmfListCard     @"kmfListCard"
#define mfCardStyle     @"mfCardStyle"

@interface MFCardModel : NSObject <MFCardModelDelegate,MFCardVoiceDelegate>
@property(nonatomic,strong)NSString *messageTextToSpeech;
@property(nonatomic,strong,readonly)NSString *messageTo;
@property(nonatomic,strong,readonly)NSString *messageFrom;
@property(nonatomic,strong,readonly)NSString *messageId;
@property(nonatomic,strong)NSDate   *messageTime;
@property(nonatomic,strong)NSString *messageTemplateType;
@property(nonatomic,strong,readonly)NSString *intentName;
@property(nonatomic,assign)CGFloat rowHeight;
-(NSDictionary*)getMessageDictionary;
-(NSDictionary*)getCardDictionary;
-(NSDictionary*)getPayloadDictionary;
@property(nonatomic,assign)BOOL isIncoming;
@property(nonatomic,assign)BOOL isOutgoing;
@property(strong,nonatomic)NSIndexPath *rowIndexPath;

//for swipe cards
@property(nonatomic,assign)NSInteger swipeIndex;
@property(nonatomic,assign)BOOL isSwipeCard;
@property(nonatomic,strong)NSIndexPath *swipeIndexPath;

@property(nonatomic,strong)MFComponent *component;
@property(nonatomic,strong)id cardObject;
@property(nonatomic,strong)NSArray *cardsArray;
-(MFCardCell *)nibCell;
-(NSString*)tableviewCellIdentifier;
@property(nonatomic,weak)id linkedTableController;
@property(nonatomic,assign)CGFloat networkProgress;
//Common actions
-(void)disableButtonsAll;
-(void)disableButtonsAtIndex:(NSInteger)index;
-(MFIndexedCollectionView*)getCarouselAtIndexpath:(NSIndexPath*)indexpath;
-(MFCardStyle*)getStyle;
-(MFCardStyle*)getStyleForComponent:(NSString*)component;

-(CGFloat)rawRowHeight;
-(NSArray*)getSpeechSuggestionsText;
-(BOOL)isCurrentTableControllerOnTop;
@end
