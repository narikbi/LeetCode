//
//  238.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    
    vector<int> res (nums.size());
    res[0] = 1;
    for (int i = 1; i < nums.size(); i++) {
        res[i] = res[i-1] * nums[i-1];
    }
    
    int right = 1;
    for (int i = nums.size()-1; i >= 0; i--) {
        res[i] *= right;
        right *= nums[i];
    }
    
    return res;
}

