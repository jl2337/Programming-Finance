//
//  main.cpp
//  Sqlist
//
//  Created by 刘佳杰 on 2/25/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "SqList.hpp"
#include "SqList.cpp"   // When using Class Template, you have to import cpp file into main.cpp, or will have linker error!

int main(int argc, const char * argv[]) {
    SqList<int> BookList;   // class template, data type here is integer
    for(int i=0;i<25;i++){
        BookList.my_push_back(i);
    }
    BookList.traverse();
    
    BookList.insert(5, 66);
    BookList.insert(12, 88);
    BookList.traverse();
    
    BookList.del_position(12);
    BookList.traverse();
    
    BookList.del_IBSN(66);
    BookList.traverse();
    
    BookList.insert(10, 69);
    BookList.insert(18, 96);
    BookList.selection_sort();
    BookList.traverse();
    
    BookList.insert(5, 105);
    BookList.insert(9, -20);
    BookList.insert(19, -105);
    BookList.burble_sort();
    BookList.traverse();
    
    cout << BookList.linear_search(30) << endl;
    cout << BookList.linear_search(16) << endl;
    cout << BookList.binary_search(69) << endl;
    cout << BookList.binary_search(99) << endl;
    
    // After testing, it shows that all functions inside SqList Class works well.
    // Users can use these function through public interface of SqList Class by themselves if they like.
    return 0;
}
