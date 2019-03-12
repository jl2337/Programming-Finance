//
//  IntegerSet.hpp
//  In Class 5
//
//  Created by 刘佳杰 on 3/12/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef IntegerSet_hpp
#define IntegerSet_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class IntegerSet{
public:
    IntegerSet();
    void InputSet();
    friend IntegerSet UnionOfSet(const IntegerSet&,const IntegerSet&);
    friend IntegerSet IntersectionOfSet(const IntegerSet&,const IntegerSet&);
    void PrintSet();
private:
    int ID[101];
};
#endif /* IntegerSet_hpp */
