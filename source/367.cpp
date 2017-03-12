//
//  367.cpp
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

bool isPerfectSquare(int num) {
    
    int low = 1;
    int high = num;
    
    while (low <= high) {
        long mid = (low + high) >> 1;
        if (mid * mid == num) {
            return true;
        } else if (mid * mid < num) {
            low = (int)mid + 1;
        } else {
            high = (int)mid - 1;
        }
    }
    
    return false;
    
}
