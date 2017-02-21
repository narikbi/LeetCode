//
//  453.cpp
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

int minMoves(vector<int>& nums) {
    
    int count = 0;
    int mn = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        mn = min(mn, nums[i]);
    }
    
    for (int i = 0; i < nums.size(); i++) {
        count += nums[i] - mn;
    }
    
    return count;
}

