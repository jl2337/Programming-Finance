//
//  IntegerSet.cpp
//  In Class 5
//
//  Created by 刘佳杰 on 3/12/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "IntegerSet.hpp"

IntegerSet::IntegerSet(){
    for(int i=0;i<101;i++){
        ID[i] = 0;
    }
}

void IntegerSet::InputSet(){
    int temp;
    do{
        cout << "Enter an element (-1 to end): ";
        cin >> temp;
        if(temp == -1)  break;
        while(temp < 0 || temp > 100){
            cout << "Again\n";
            cin >> temp;
        }
        ID[temp] = 1;
    }while(temp != -1);
}

IntegerSet UnionOfSet(const IntegerSet& ob1 ,const IntegerSet& ob2){
    IntegerSet new_ob;
    for(int i=0;i<101;i++){
        new_ob.ID[i] = (ob1.ID[i] && ob2.ID[i]);
    }
    return new_ob;
}

IntegerSet IntersectionOfSet(const IntegerSet& ob1,const IntegerSet& ob2){
    IntegerSet new_ob;
    for(int i=0;i<101;i++){
        new_ob.ID[i] = (ob1.ID[i] || ob2.ID[i]);
    }
    return new_ob;
}

void IntegerSet::PrintSet(){
    cout << "{\t";
    for(int i=0;i<101;i++){
        if(ID[i])   cout << i << '\t';
    }
    cout << "}\n";
}
