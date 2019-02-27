//
//  main.cpp
//  In Class 4
//
//  Created by 刘佳杰 on 2/26/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

// Count the number of binary strings of length n that do not have two consecutive 0's.
// Use recursion tree
// Time Complexity is O(N), Memory Complexity is O(N) becasue auxliary array is used
int countBinStr(int n)
{
    int T[n+1][2];
    
    T[0][0] = 0; T[0][1] = 0;        // no digit is left
    T[1][0] = 1; T[1][1] = 2;        // if only one digit is left
    
    for (int i = 2; i <= n; i++)
    {
        // if last digit is 0, we can have only 1 at current position
        T[i][0] = T[i-1][1];
        
        // if last digit is 1, we can have both 0 and 1 at current position
        T[i][1] = T[i-1][0] + T[i-1][1];
    }
    
    return T[n][1];
    
}

int main(int argc, const char * argv[]) {
    
    unsigned int n; cout << "Please input n\n"; cin >> n;
    
    cout << "The number of binary strings of length " << n << endl
    << "that do not contain two consecutive 0's is " << countBinStr(n) << endl;
    
    return 0;
}
