//
//  UserNoteViewController.h
//  Guideo
//
//  Created by wei on 15/5/22.
//  Copyright (c) 2015年 Guideo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UserNoteViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>

@property NSMutableArray *notes;
@property (nonatomic, strong) NSOperationQueue *imageDownloadingQueue;
@property (nonatomic, strong) NSCache *imageCache;

@end