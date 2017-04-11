//
//  400.cpp
//  LeetCode
//
//  Created by Narikbi on 12.04.17.
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

int findNthDigit(int n) {
    
    int len = 1;
    long long count = 9;
    int start = 1;
    
    while (n > len * count) {
        n -= len * count;
        len++;
        count *= 10;
        start *= 10;
    }
    
    start += (n-1) / len;
    string s = to_string(start);
    
    return s[(n-1) % len] - '0';
    
}


