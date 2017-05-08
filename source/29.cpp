//
//  29.cpp
//  LeetCode
//
//  Created by Narikbi on 08.05.17.
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
#include <unordered_set>

using namespace std;

int divide(int dividend, int divisor) {
    
    if (!divisor || (dividend == INT_MIN && divisor == -1)) return INT_MAX;
    
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    long long dvd = labs(dividend);
    long long dvs = labs(divisor);
    
    int res = 0;
    while (dvd >= dvs) {
        long long t = dvs, multiple = 1;
        while (dvd >= (t << 1)) {
            t <<= 1;
            multiple <<= 1;
        }
        
        dvd -= t;
        res += multiple;
    }
    
    return sign == 1 ? res : -res;
    
}

