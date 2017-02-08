//
//  AppDelegate.h
//  HealthKitDemo
//
//  Created by zivInfo on 16/8/2.
//  Copyright © 2016年 xiwangtech.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <HealthKit/HealthKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) HKHealthStore *healthStore;


@end

