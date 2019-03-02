//
//  main.cpp
//  Puzzle Jump
//
//  Created by 刘佳杰 on 3/1/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

bool my_fun(vector<int> &vec,int a){
    if(vec[a-1]==-1||a<1||a>vec.size()) return false;
    else if(a == vec.size()) return true;
    else{
        int temp = vec[a-1];
        vec[a-1] = -1;
        if(a==1) return my_fun(vec, a+temp);
        else{
            if(rand()%2 == 0) return my_fun(vec, a+temp);
            else return my_fun(vec, a-temp);
        }
    }
}
// Please run for 1000 times by yourself before it succeed to jumo out of the puzzle.
int main(int argc, const char * argv[]) {
    vector<int> my_vec1 = {3,2,3,1,6,2,5,1,0};
    vector<int> my_vec2 = {1,2,3,1,0};
    srand(static_cast<unsigned int>(time(0)%10));
    cout << my_fun(my_vec1, 1) << endl;
    cout << my_fun(my_vec2, 1) << endl;
    return 0;
}
