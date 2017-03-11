//
//  334.cpp
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


bool increasingTriplet(vector<int>& nums) {
    
    int small = INT_MAX;
    int big = INT_MAX;
    
    for (int x : nums) {
        if (x <= small) {
            small = x;
        } else if (x <= big) {
            big = x;
        } else {
            return true;
        }
    }
    
    return false;
}

