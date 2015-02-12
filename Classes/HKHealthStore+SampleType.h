//
//  HKHealthStore+SampleType.h
//  HealthkitTest
//
//  Created by Accenture on 1/28/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>

@interface HKHealthStore (SampleType)


- (void)QuantitySampleOfType:(HKQuantityType *)quantityType predicate:(NSPredicate *)predicate completion:(void (^)(HKQuantity *, NSError *))completion;
//- (void)getDataFromType:(NSString*)type;
//- (void)getDataFromType:(NSString*)type completion:(void (^)(NSDictionary *, NSError *))completion;
//
//- (void)categorySampleOfType;
//- (void)readAllRequiredType;
@end
