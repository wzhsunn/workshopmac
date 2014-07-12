//
//  TestTraits.cpp
//  TestCPP
//
//  Created by zcomer on 7/12/14.
//  Copyright (c) 2014 zcomer. All rights reserved.
//

#include "TestTraits.h"
#include<iostream>
using namespace std;


class CComplextObject{
public:
    void clone(){cout << "in clone" << endl;}
};

template<bool>class Traits{};
template<>class Traits<true>{};
template<>class Traits<false>{};

template <typename T, bool isClonable>
 class XContainer{
     
    
 public:
     enum{Clonalbe = isClonable};
     
     void clone(T* pObj){
         clone(Traits<isClonable>(), pObj);
     }
     
 public:
     void clone(const Traits<true>&, T* pObj){
         cout << "before cloning Clonable type" << endl;
         pObj->clone();
         cout << "after cloning Clonable type" << endl;
     }
     
     void clone(const Traits<false>&, T* pObj){
         cout << "cloning non Clonable type" << endl;
     }
     
};


void TestTraits()
 {
     int* p1 = 0;
     CComplextObject* p2 = 0;
     
     XContainer<int, false> n1;
     XContainer<CComplextObject, true> n2;
     
     n1.clone(p1);
     n2.clone(p2);
     
 }


