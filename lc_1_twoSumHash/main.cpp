
//
//  main.cpp
//  1_twoSumHash
//
//  Created by 孙永杰 on 2022/5/3.
//

#include <iostream>
#include "twoSumHash.h"
using std::cout;
using std::endl;

int main( int argc, const char* argv[ ] ) {
    // insert code here...
    std::cout << "Hello, World!\n";
    solution_twoSumHash a;
    std::vector< int > vec{ 2, 7, 11, 15 };
    // [ 0, 1 ]
    std::vector<int> ret = a.twoSum( vec, 9 );
    for ( std::vector<int>::const_iterator it = ret.begin(); it != ret.end(); ++it ) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // [ 1, 3 ]
    ret = a.twoSum( vec, 22 );
    for ( std::vector<int>::const_iterator it = ret.begin(); it != ret.end(); ++it ) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
