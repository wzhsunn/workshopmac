//
//  TestTraits.h
//  TestCPP
//
//  Created by zcomer on 7/12/14.
//  Copyright (c) 2014 zcomer. All rights reserved.
//

#ifndef __TestCPP__TestTraits__
#define __TestCPP__TestTraits__

#include <iostream>
void TestTraits();

void TestTemplate();


template <class T>
T add(T a, T b){
    return a + b;
}
#endif /* defined(__TestCPP__TestTraits__) */
