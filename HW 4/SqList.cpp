//
//  SqList.cpp
//  Sqlist
//
//  Created by 刘佳杰 on 2/25/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "SqList.hpp"

template<class T>
SqList<T>::SqList(int cap){ // constructor
    this->IBSN = new T[cap];    // dynamic allocation of memory
    if(!this->IBSN)   throw "No memory!";
    capacity = cap; n = 0;
}

template<class T>
void SqList<T>::traverse(){ // print data
    for(int i=0;i<n;i++){
        cout << IBSN[i] << endl;
    }
    cout << endl;
}

template<class T>
bool SqList<T>::re_alloc(){ // re-allocation for memory
    T* p = new T[2*capacity];
    if(!p)  return false;
    for(int i=0;i<n;i++){
        p[i] = IBSN[i];
    }
    delete [] IBSN; IBSN = p;   // delete before new assignment, otherwise memory will leak
    capacity *= 2;
    return true;
}

template<class T>
bool SqList<T>::my_push_back(T new_IBSN){   // push back data to the end
    if(n == capacity){
        if(!re_alloc()) return false;
    }
    IBSN[n++] = new_IBSN;
    return true;
}

template<class T>
bool SqList<T>::insert(int i,T new_IBSN){   // insert data to i-th element
    if(i<1||i>n+1)  return false;
    if(n == capacity){
        if(!re_alloc()) return false;
    }
    for(int j=n;j>=i;j--){
        IBSN[j] = IBSN[j-1];
    }
    IBSN[i-1] = new_IBSN; n++;
    return true;
}

template<class T>
bool SqList<T>::del_position(int i){    // delete by position
    if(i<1||i>n)    return false;
    for(int j=i-1;j<n;j++){
        IBSN[j] = IBSN[j+1];
    }
    n--; return true;
}

template<class T>
bool SqList<T>::del_IBSN(T new_IBSN){   // delete by data
    for(int i=0;i<n;i++){
        if(IBSN[i] == new_IBSN){
            del_position(i+1); return true;
        }
    }
    return false;
}

template<class T>
void my_swap(T &a,T &b){    // my_swap
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void SqList<T>::selection_sort(){   // selection sort, Time complexity is O(N^2)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(IBSN[i]>IBSN[j])
                my_swap(IBSN[i],IBSN[j]);
        }
    }
}

template<class T>
void SqList<T>::burble_sort(){  // burble sort, Time complexity is O(N^2)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(IBSN[j]>IBSN[j+1])
                my_swap(IBSN[j], IBSN[j+1]);
        }
    }
}

template<class T>
bool SqList<T>::linear_search(T new_IBSN){  // linear search, Time complexity is O(N)
    for(int i=0;i<n;i++){
        if(IBSN[i]==new_IBSN)   return true;
    }
    return false;
}

template<class T>
bool SqList<T>::binary_search(T new_IBSN){
    // binary search, Time complexity is O(logN), much better than O(N) when large size of data
    int low = 0, high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(IBSN[mid]>new_IBSN)  high = mid-1;
        else if(IBSN[mid]<new_IBSN) low = mid+1;
        else return true;
    }
    return false;
}
