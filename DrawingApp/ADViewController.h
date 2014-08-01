//
//  ADViewController.h
//  DrawingApp
//
//  Created by Arbi Derhartunian on 4/1/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADViewController : UIViewController
{
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
    
    
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;

@property (weak, nonatomic) IBOutlet UIImageView *tempImage;

@property (weak, nonatomic) IBOutlet UIButton *eraserPressed;


- (IBAction)pencilPressed:(id)sender;
- (IBAction)erase:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)Reset:(id)sender;

@end
