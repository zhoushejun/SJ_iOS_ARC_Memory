//
//  SJConcreteStackBlock_1.m
//  SJ_iOS_ARC_Memory
//
//  Created by zhoushejun on 2016/11/16.
//  Copyright © 2016年 zhoushejun. All rights reserved.
//

#import "SJConcreteStackBlock_1.h"

@implementation SJConcreteStackBlock_1

- (void)concreteStackBlock_1{
    void (^MyBlock)(void);
    MyBlock = ^(){
        NSLog(@"Hello Wold!");
    };
    MyBlock();
}

@end
