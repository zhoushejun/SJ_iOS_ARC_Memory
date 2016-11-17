//
//  SJConcreteStackBlock_2.m
//  SJ_iOS_ARC_Memory
//
//  Created by zhoushejun on 2016/11/17.
//  Copyright © 2016年 zhoushejun. All rights reserved.
//

#import "SJConcreteStackBlock_2.h"

@implementation SJConcreteStackBlock_2

- (void)concreteStackBlock_2{
    NSString *myStr = @"Hello Wold!";
    void (^MyBlock)(void);
    MyBlock = ^(){
        NSLog(myStr);
    };
    MyBlock();
}

@end
