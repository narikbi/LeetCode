//
//  55.cpp
//  LeetCode
//
//  Created by Narikbi on 13.04.17.
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

bool canJump(vector<int>& nums) {
    
    int step = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > step) return false;
        step = max(step, nums[i]+i);
    }
    
    return true;
}

