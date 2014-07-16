//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Francesco Biegi on 16/07/14.
//  Copyright (c) 2014 Francesco Biegi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
