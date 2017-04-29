//
//  523.cpp
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

bool checkSubarraySum(vector<int>& nums, int k) {
    
    int n = nums.size();
    unordered_set<int> set;
    
    int sum = 0;
    int pre = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        
        int mod = k == 0 ? sum : sum % k;
        if (set.count(mod)) {
            return true;
        }
        set.insert(pre);
        pre = mod;
    }
    
    return false;
}



