//
//  DetailViewController.h
//  MyFriends
//
//  Created by ann on 07.06.17.
//  Copyright (c) 2017 ann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
