//
//  26.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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


int removeDuplicates(vector<int>& nums) {
    
    if (nums.size() < 2) return nums.size();
    
    int idx = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i-1]) nums[idx++] = nums[i];
    }
    
    return idx;
}
