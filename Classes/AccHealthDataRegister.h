//
//  AccHealthDataRegister.h
//  HealthkitTest
//
//  Created by Accenture on 2/2/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import "AccHealthDataCollector.h"

@interface AccHealthDataRegister : NSObject

@property (nonatomic) HKHealthStore *healthStore;

- (instancetype)initWithHealthStore:(HKHealthStore*)store;
- (void)registAlldata:(id<AccHealthDataCollectorDelegate>)delegate;
@end
