//
//  SWTableViewCell.h
//  SWTableViewCell
//
//  Created by Chris Wendel on 9/10/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>
#import "SWCellScrollView.h"
#import "SWLongPressGestureRecognizer.h"
#import "SWUtilityButtonTapGestureRecognizer.h"
#import "NSMutableArray+SWUtilityButtons.h"

@class SWTableViewCell;

typedef NS_ENUM(NSInteger, SWCellState)
{
    kCellStateCenter,
    kCellStateRight,
};

@protocol SWTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCell:(SWTableViewCell *)cell didTriggerRightUtilityButtonWithIndex:(NSInteger)index;
- (void)swipeableTableViewCell:(SWTableViewCell *)cell scrollingToState:(SWCellState)state;
- (BOOL)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(SWTableViewCell *)cell;
- (BOOL)swipeableTableViewCell:(SWTableViewCell *)cell canSwipeToState:(SWCellState)state;
- (void)swipeableTableViewCellDidEndScrolling:(SWTableViewCell *)cell;
- (void)swipeableTableViewCell:(SWTableViewCell *)cell didScroll:(UIScrollView *)scrollView;

@end

@interface SWTableViewCell : UITableViewCell

@property (nonatomic, copy) NSArray *rightUtilityButtons;
//@property (nonatomic, assign) BOOL interested;

@property (nonatomic, weak) id <SWTableViewCellDelegate> delegate;

- (void)setRightUtilityButtons:(NSArray *)rightUtilityButtons WithButtonWidth:(CGFloat) width;
- (void)hideUtilityButtonsAnimated:(BOOL)animated;
- (void)showRightUtilityButtonsAnimated:(BOOL)animated;

- (BOOL)isUtilityButtonsHidden;

@end
