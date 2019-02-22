//
//  main.cpp
//  HW 1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double max = __DBL_MIN__, min = __DBL_MAX__;
    for(int i=0;i<5;i++){
        cout << "Input\n";
        double temp;
        cin >> temp;
        if(temp < min)
            min = temp;
        if(temp > max)
            max = temp;
    }   // The time complexity would be linear
    cout << "Min is: " << min << endl;
    cout << "Max is: " << max << endl;
    return 0;
}
