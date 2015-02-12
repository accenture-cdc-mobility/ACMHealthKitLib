//
//  NSSet+HealthKitPermission.h
//  HealthkitTest
//
//  Created by Accenture on 1/26/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSSet(HealthKitPermission)
+ (NSSet*)setReadPermission;
+ (NSSet*)setWritePermission;
@end
