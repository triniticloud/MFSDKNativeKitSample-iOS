//
//  INTextView.m
//  INSDKMessagingKit
//
//  Created by ActiveAI on 29/08/17.
//  Copyright © 2017 ActiveAI. All rights reserved.
//

#import "INTextView.h"

@implementation INTextView
- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self)
    {
        [self setTextContainerInset:UIEdgeInsetsZero];
        self.textContainer.lineFragmentPadding = 0;
        self.userInteractionEnabled = YES;
        self.editable = NO;
        self.selectable = YES;
        self.scrollEnabled = NO;
        self.dataDetectorTypes = UIDataDetectorTypeLink;
    }
    return self;
}
@end
