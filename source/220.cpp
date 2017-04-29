//
//  220.cpp
//  LeetCode
//
//  Created by Narikbi on 30.04.17.
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

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    
    set <long long> window;
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) window.erase(nums[i-k-1]);
        
        auto pos = window.lower_bound((long long)nums[i] - (long long)t);
        if (pos != window.end() && (long long)*pos - (long long)nums[i] <= (long long)t) {
            return true;
        }
        window.insert(nums[i]);
    }
    
    return false;
}



