//
//  MFSwipeCardCell.h
//  MFSDKMessagingKit
//
//  Created by Vinoth on 8/10/18.
//  Copyright © 2018 Ideas2IT. All rights reserved.
//

#import <MFSDKMessagingKit/MFSDKMessagingKit.h>

@interface MFIndexedCollectionView : UICollectionView
@property (nonatomic, strong) NSIndexPath *indexPath;
@end

@interface MFSwipeCardCell : MFCardCell <UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property(nonatomic,strong)IBOutlet MFIndexedCollectionView *objCollectionView;
@property(nonatomic,weak) MFSwipeCardModel *tempSwipeCardModel;
- (void)setCollectionViewDataSourceDelegate:(id<UICollectionViewDataSource, UICollectionViewDelegate>)dataSourceDelegate indexPath:(NSIndexPath *)indexPath;
@end
