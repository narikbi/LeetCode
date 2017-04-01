//
//  213.cpp
//  LeetCode
//
//  Created by Narikbi on 01.04.17.
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

using namespace std;

int robber(vector<int>& nums, int l, int r) {
    
    int pre = 0;
    int cur = 0;
    
    for (int i = l; i <= r; i++) {
        int temp = max(pre + nums[i], cur);
        pre = cur;
        cur = temp;
    }
    
    return cur;
}

int rob(vector<int>& nums) {
    int n = nums.size();
    
    if (n < 2) return n ? nums[0] : 0;
    return max(robber(nums, 0, n-2), robber(nums, 1, n-1));
    
}




