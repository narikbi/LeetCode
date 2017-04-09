//
//  219.cpp
//  LeetCode
//
//  Created by Narikbi on 08.04.17.
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


bool containsNearbyDuplicate(vector<int>& nums, int k) {
    
    unordered_set <int> s;
    
    if (k <= 0) return false;
    if (k >= nums.size()) k = nums.size() - 1;
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) s.erase(nums[i-k-1]);
        if (s.find(nums[i]) != s.end()) {
            return true;
        }
        s.insert(nums[i]);
    }
    
    return false;
}

