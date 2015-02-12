//
//  ViewController.m
//  ACMHealthKitDemo
//
//  Created by Accenture on 2/12/15.
//  Copyright (c) 2015 RenChao. All rights reserved.
//

#import "ViewController.h"
#import "AccHealthDataRegister.h"
#import "NSSet+HealthKitPermission.h"
#import "HKHealthStore+SampleType.h"
#import "AccHealthDataOuter.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [self getHealthPermission];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)getHealthPermission
{
    self.healthStore = [[HKHealthStore alloc] init];
    NSSet *readSet = [NSSet setReadPermission];
    NSSet *writeSet = [NSSet setWritePermission];
    [self.healthStore requestAuthorizationToShareTypes:writeSet readTypes:readSet completion:^(BOOL success, NSError *error) {
        if (success)
        {
            //            [self.healthStore readAllRequiredType];
            AccHealthDataRegister *accRegister = [[AccHealthDataRegister alloc] initWithHealthStore:self.healthStore];
            [accRegister registAlldata:self];
        }
        else
        {
            NSLog(@"You didn't allow HealthKit to access these read/write data types. In your app, try to handle this error gracefully when a user decides not to provide access. The error was: %@. If you're using a simulator, try it on a device.", error);
            return ;
        }
    }];
}

//delegate deal with the data
- (void)FinishCollect
{
    for (NSDictionary *dictionary in [[AccHealthDataOuter shareInstance] dataArrays])
    {
        NSString *key = [dictionary objectForKey:@"Type"];
        NSString *value = [dictionary objectForKey:@"Value"];
        NSLog(@"%@:%@", key, value);
    }
}

@end
