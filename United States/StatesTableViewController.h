//
//  StatesTableViewController.h
//  United States
//
//  Created by user on 11/1/17.
//  Copyright © 2017 user. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StatesTableViewController : UITableViewController
@property (strong, nonatomic) NSString *pListPath;
@property (strong, nonatomic) NSDictionary *unitedStates;
@property (strong, nonatomic) NSArray *keys;


@end
