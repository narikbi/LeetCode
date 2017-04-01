//
//  201.cpp
//  LeetCode
//
//  Created by Narikbi on 01.04.17.
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
#include <sstream>

using namespace std;

int rangeBitwiseAnd(int m, int n) {
    
    int mask = INT_MAX;
    
    while ((m&mask) != (n&mask)) mask = mask << 1;
    
    return n & mask;
}


