//
//  461.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


int hammingDistance(int x, int y) {
    
    int res = x ^ y;
    int count = 0;
    while (res > 0) {
        count += res & 1;
        res >>= 1;
    }
    
    return count;
}

//int main(int argc, const char * argv[]) {
//    
//    cout << hammingDistance(1, 4);
//
//    return 0;
//}
