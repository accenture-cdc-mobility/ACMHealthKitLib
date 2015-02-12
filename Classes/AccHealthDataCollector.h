//
//  AccHealthDataCollector.h
//  HealthkitTest
//
//  Created by Accenture on 1/30/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>

@protocol AccHealthDataCollectorDelegate;

@interface AccHealthDataCollector : NSObject
{
    NSMutableArray *dataArrays;
    NSMutableArray *registerArray;
    
}
@property (nonatomic) HKHealthStore *healthStore;
@property (strong, nonatomic) NSMutableArray *registerArray;
@property (weak) id<AccHealthDataCollectorDelegate>delegate;

- (void)startObserver:(id)sender;
- (void)registAllData;
- (void)readAllRequiredType;
@end

@protocol AccHealthDataCollectorDelegate <NSObject>

- (void)FinishCollect;

@end