//
//  Test.cpp
//  TestCPP
//
//  Created by zcomer on 7/11/14.
//  Copyright (c) 2014 zcomer. All rights reserved.
//

#include "Test.h"
#include <map>
using namespace std;

void Test()
{
    map<map<string,int>, int> mymap;
    
    map<string, int> keymap;
    keymap.emplace("abc", 123);
    
    mymap.emplace(keymap, 234);
    
    
    
}