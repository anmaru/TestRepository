//
//  MasterViewController.h
//  TestRepo
//
//  Created by 安東貞義 on 2014/06/28.
//  Copyright (c) 2014年 anmaru. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
