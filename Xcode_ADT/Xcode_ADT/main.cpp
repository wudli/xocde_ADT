//
//  main.cpp
//  ADT
//
//  Created by computer on 15/10/7.
//  Copyright © 2015年 wud.li. All rights reserved.
//

#include<iostream>
#include "SortAlgorithm.cpp"

using namespace std;

int main() {
    int a[11] = {0,4, 4, 1, 4, 3, 4, 2, 1, 3};
    for (int i = 0; i < 10; i ++) {
        cout << a[i];
    }
    SortAlgorithm<int> X;
    X.InsertSort(a, 10);
    
    return 0;
}



//2014083408
//2014083110
//2013250428
//2014081218
//2014081611
//2014083203
//2014083325
//2014083120
//2014083404
//2013250706

