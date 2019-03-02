//
//  main.cpp
//  HW 5
//
//  Created by 刘佳杰 on 3/1/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

void my_fun(int odd,int even,int temp){
    if(odd >= 1 && even !=0){
        cout << odd*odd << ',';
        odd -= 2;
    }
    else if(odd == 1 && even == 0){
        cout << odd*odd << endl;
        odd -= 2;
    }
    else if(temp < even){
        cout << temp*temp << ',';
        temp += 2;
    }
    else if(temp == even){
        cout << temp*temp << endl;
        temp += 2;
    }
    else    return;
    my_fun(odd, even, temp);    // recursion
}
// Function overloading
void my_fun(unsigned int n){
    if(n%2 == 0)
        my_fun(n-1, n,2);
    else
        my_fun(n, n-1,2);
}

int main(int argc, const char * argv[]) {
    my_fun(4);
    my_fun(1);
    my_fun(2);
    my_fun(7);
    my_fun(6);
    return 0;
}
