//
//  ViewController.m
//  MFSDKNativeKitSample
//
//  Created by Vivek Raj on 29/08/19.
//  Copyright © 2019 Vivek Raj. All rights reserved.
//

#import "ViewController.h"
#import <MFSDKMessagingKit/MFSDKMessagingKit.h>

@interface ViewController ()<MFSDKMessagingDelegate>
@property (weak, nonatomic) IBOutlet UIButton *askMeButton;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    if (@available(iOS 8.2, *)) {
        [self.askMeButton.titleLabel setFont:[UIFont systemFontOfSize:14 weight:UIFontWeightBold]];
    } else {
        // Fallback on earlier versions
    }if (@available(iOS 8.2, *)) {
        [self.askMeButton.titleLabel setFont:[UIFont systemFontOfSize:14 weight:UIFontWeightBold]];
    } else {
        // Fallback on earlier versions
    }
}

// Once the button is clicked, show the message screen
-(IBAction)startChat:(id)sender
{
    //external card added
    MFCardTemplateMapping *templateMapping = [MFCardTemplateMapping new];
    templateMapping.incomingCellNibName = @"MFFundTransferSuccessHtmlCell_IN";
    templateMapping.cellNibName = @"MFFundTransferSuccessHtmlCell";
    templateMapping.cellModelName = @"MFFundTransferSuccessHtmlModel";
    templateMapping.isListCard = YES;
    [[MFSDKMessagingManager sharedInstance] registerTemplateMapping:templateMapping forCardTemplate:@"fundTransferSuccessHtml"];
    
    //Bot intialisation
    MFSDKProperties *params = [[MFSDKProperties alloc] initWithDomain:@"https://flow-qa.active.ai"];
    [params addBot:@"171i10456640077" botName:@"Active Bank"];
    params.messagingDelegate = self;
    [[MFSDKMessagingManager sharedInstance] initWithProperties:params];
    
    MFSDKSessionProperties *sessionProperties = [[MFSDKSessionProperties alloc]init];
    sessionProperties.language = @"en";
    [[MFSDKMessagingManager sharedInstance] showScreenWithBotID:@"171i10456640077" fromViewController:self withSessionProperties:sessionProperties];
}
@end
