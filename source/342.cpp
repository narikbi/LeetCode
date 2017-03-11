//
//  342.cpp
//  LeetCode
//
//  Created by Narikbi on 12.03.17.
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
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <unordered_map>

using namespace std;


bool isPowerOfFour(int num) {
    int mask = 0b01010101010101010101010101010101;
    
    if (num < 0) {
        return false;
    }
    
    if ((num & num-1) != 0) return false;
    
    if ((num & mask) != 0) return true;
    
    return false;
}
