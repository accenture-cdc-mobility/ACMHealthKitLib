//
//  AccHealthDataRegister.m
//  HealthkitTest
//
//  Created by Accenture on 2/2/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import "AccHealthDataRegister.h"
#import "HKHealthStore+SampleType.h"
#import "HealthDataWithUnit.h"
#import "AccHealthDataCollector.h"
#import "AccHealthDataOuter.h"

@implementation AccHealthDataRegister
- (instancetype)initWithHealthStore:(HKHealthStore*)store
{
    if (self = [super init])
    {
        self.healthStore = store;
    }
    return self;
}

- (void)registAlldata:(id<AccHealthDataCollectorDelegate>)delegate
{
    AccHealthDataCollector *collector = [[AccHealthDataCollector alloc] init]
    ;
    collector.delegate = delegate;
//    [collector startObserver:delegate];
    collector.healthStore = self.healthStore;
    [collector registAllData];
    [collector readAllRequiredType];
}

@end
