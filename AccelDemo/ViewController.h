//
//  ViewController.h
//  AccelDemo
//
//  Created by Ali Raza on 4/6/12.
//  Copyright (c) 2012 Welltime Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIAccelerometerDelegate>



@property(nonatomic, strong) IBOutlet UILabel *xLabel;
@property(nonatomic, strong) IBOutlet UILabel *yLabel;
@property(nonatomic, strong) IBOutlet UILabel *zLabel;

@property(nonatomic, strong) UIAccelerometer *accelerometer;

@end
