//
//  main.cpp
//  In Class 5
//
//  Created by 刘佳杰 on 3/12/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "IntegerSet.hpp"

int main(int argc, const char * argv[]) {
    
    cout << "Input Set A:\n";
    IntegerSet ob1;
    ob1.InputSet();
    
    cout << "\nSet A:\n";
    ob1.PrintSet();
    
    cout << "\nInput Set B:\n";
    IntegerSet ob2;
    ob2.InputSet();
    
    cout << "\nSet B:\n";
    ob2.PrintSet();
    
    cout << "\nIntersection of Set A and B:\n";
    IntegerSet ob3 = IntersectionOfSet(ob1,ob2);
    ob3.PrintSet();
    
    cout << "\nUnion of Set A and B:\n";
    IntegerSet ob4 = UnionOfSet(ob1,ob2);
    ob4.PrintSet();
    
    return 0;
}
