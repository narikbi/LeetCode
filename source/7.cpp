//
//  7.cpp
//  LeetCode
//
//  Created by Narikbi on 24.04.17.
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

int reverse(int x) {
    
    int y = 0;
    
    while (x > 0) {
        
        int n = x%10;
        if (y > INT_MAX/10 || y < INT_MIN/10) {
            return 0;
        }
        
        y = y * 10 + n;
        x /= 10;
    }
    
    return y;
}

