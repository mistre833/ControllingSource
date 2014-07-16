//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Francesco Biegi on 16/07/14.
//  Copyright (c) 2014 Francesco Biegi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
