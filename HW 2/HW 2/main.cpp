//
//  main.cpp
//  HW 2
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, count = 0;
    time_t start,end;
    cout << "Number of iteration?\n";
    cin >> n;
    while(n < 1000){
        cout << "More iterations, give another one\n";
        cin >> n;
    }
    fstream file;
    file.open("my_data.txt",ios::app);
    if(!file){
        cout << "Failed to creat txt file\n";
        return 0;
    }
    else{
        cout << "Succeed\n";
    }
    srand(1);   // if you want do another simulation, should change the seed
    start = clock();
    for(int i=0;i<n;i++){
        double x = static_cast<double>(rand())/static_cast<double>(RAND_MAX);
        double y = static_cast<double>(rand())/static_cast<double>(RAND_MAX);
        file << x << '\t' << y << endl;
        if(sqrt(x*x+y*y) <= 1){
            count++;
        }
    }
    end = clock();
    cout << "Estimation of Pi is: " << static_cast<double>(count)/static_cast<double>(n)*4 << endl;
    cout << "Running time is: " << static_cast<double>(end-start)*1000/CLOCKS_PER_SEC << "ms\n";
    return 0;
}
