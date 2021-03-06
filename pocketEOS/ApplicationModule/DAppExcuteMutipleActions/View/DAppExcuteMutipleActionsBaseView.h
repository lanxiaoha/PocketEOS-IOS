//
//  DAppExcuteMutipleActionsBaseView.h
//  pocketEOS
//
//  Created by oraclechain on 2018/8/24.
//  Copyright © 2018 oraclechain. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DAppExcuteMutipleActionsBaseViewDelegate<NSObject>
- (void)excuteMutipleActionsConfirmBtnDidClick;
- (void)excuteMutipleActionsCloseBtnDidClick;
@end


@interface DAppExcuteMutipleActionsBaseView : UIView

- (void)updateViewWithArray:(NSArray *)dataArray;

@property(nonatomic , strong) NSMutableArray *actionsArray;



@property(nonatomic, weak) id<DAppExcuteMutipleActionsBaseViewDelegate> delegate;

@end
