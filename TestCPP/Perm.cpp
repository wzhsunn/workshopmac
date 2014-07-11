//
//  Perm.cpp
//  TestCPP
//
//  Created by zcomer on 7/10/14.
//  Copyright (c) 2014 zcomer. All rights reserved.
//

#include "Perm.h"
#include <iostream>
using namespace std;

void Perm(int list[], int k, int m)
{
    if (k == m) {
        for (int i = 0; i <= m; i ++) {
            cout << list[i];
        }
        cout << endl;
    }
    else{
        for(int i = k; i <= m; ++i ){
            swap(list[k], list[i]);
            Perm(list, k + 1, m);
            swap(list[k], list[i]);
        }
    }
    
}