//
//  ViewController.h
//  ACMHealthKitDemo
//
//  Created by Accenture on 2/12/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HealthKit/HealthKit.h>
#import "AccHealthDataCollector.h"

@interface ViewController : UIViewController<AccHealthDataCollectorDelegate>

//healthkit
@property (nonatomic) HKHealthStore *healthStore;

@end

