//
//  456.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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

bool find132pattern(vector<int>& nums) {
    
    for (int j = 0, mn = INT_MIN; j < nums.size(); j++) {
        mn = min(mn, nums[j]);
        
        if (mn == nums[j]) continue;
        
        for (int k = nums.size()-1; k > j; k--) {
            if (mn < nums[k] && nums[k] < nums[j]) return true;
        }
    }
    
    return false;
}

