//
//  DetailViewController.h
//  iOS7Test
//
//  Created by BigPolarBear on 13-10-8.
//  Copyright (c) 2013年 bigpolarbear.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
