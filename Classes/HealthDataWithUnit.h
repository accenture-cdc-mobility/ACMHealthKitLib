//
//  HealthDataWithUnit.h
//  HealthkitTest
//
//  Created by Accenture on 1/29/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>

@interface HealthDataWithUnit : NSObject

+ (double)getHealthData:(HKQuantity*)quantity Type:(NSString*)type;
@end
