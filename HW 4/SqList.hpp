//
//  SqList.hpp
//  Sqlist
//
//  Created by 刘佳杰 on 2/25/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef SqList_hpp
#define SqList_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template<class T>
class SqList{   // My sequence list class
public:
    SqList(int = 20);
    virtual ~SqList(){delete [] IBSN;}  // destructor defined in header file
    bool my_push_back(T);
    void traverse();
    bool insert(int,T);
    bool del_position(int);
    bool del_IBSN(T);
    void selection_sort();
    void burble_sort();
    bool linear_search(T);
    bool binary_search(T);
private:
    T* IBSN;
    int capacity, n;
    bool re_alloc();    // set re-allocation memory function to be private
};
#endif /* SqList_hpp */
