//
//  ViewController.m
//  FABDemo
//
//  Created by Vivek Raj on 29/08/19.
//  Copyright © 2019 Vivek Raj. All rights reserved.
//

#import "ViewController.h"
#import <MFSDKMessagingKit/MFSDKMessagingKit.h>

@interface ViewController ()<MFSDKMessagingDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

// Once the button is clicked, show the message screen
-(IBAction)startChat:(id)sender
{
    MFCardTemplateMapping *templateMapping = [MFCardTemplateMapping new];
    templateMapping.incomingCellNibName = @"MFFundTransferSuccessHtmlCell_IN";
    templateMapping.cellNibName = @"MFFundTransferSuccessHtmlCell";
    templateMapping.cellModelName = @"MFFundTransferSuccessHtmlModel";
    templateMapping.isListCard = YES;
    [[MFSDKMessagingManager sharedInstance] registerTemplateMapping:templateMapping forCardTemplate:@"fundTransferSuccessHtml"];
    MFSDKProperties *params = [[MFSDKProperties alloc] initWithDomain:@"https://flow-qa.active.ai"];
    [params addBot:@"171i10456640077" botName:@"Active Bank"];
    params.messagingDelegate = self;
    [[MFSDKMessagingManager sharedInstance] initWithProperties:params];
    
    MFSDKSessionProperties *sessionProperties = [[MFSDKSessionProperties alloc]init];
    sessionProperties.language = @"en";
    [[MFSDKMessagingManager sharedInstance] showScreenWithBotID:@"171i10456640077" fromViewController:self withSessionProperties:sessionProperties];
}
@end
