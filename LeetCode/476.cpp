//
//  476.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <queue>
#include <set>

using namespace std;

int findComplement(int num) {
    
    int mask = ~0;
    while (num & mask) {
        mask <<= 1;
    }
    
    return ~mask & ~num;
}


//int main(int argc, const char * argv[]) {
//    cout << findComplement(5);
//    return 0;
//}
//
//
