//
//  198.cpp
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


int rob(vector<int>& nums) {
    
    int n = nums.size();
    if (n == 0) return 0;
    
    vector<int> dp (nums.size()+1);
    if (n >= 1) dp[0] = nums[0];
    if (n >= 2) dp[1] = max(nums[0], nums[1]);
    
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
    }
    
    return dp[n-1];
    
}

