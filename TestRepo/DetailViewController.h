//
//  DetailViewController.h
//  TestRepo
//
//  Created by 安東貞義 on 2014/06/28.
//  Copyright (c) 2014年 anmaru. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
