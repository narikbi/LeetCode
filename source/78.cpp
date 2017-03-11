//
//  78.cpp
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

vector<vector<int>> res;

void rec(vector<int>& nums, vector <int> &sol, int start) {
    
    res.push_back(sol);
    
    for (int i = start; i < nums.size(); i++) {
        sol.push_back(nums[i]);
        rec(nums, sol, i+1);
        sol.pop_back();
    }
    
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> v;
    rec(nums, v, 0);
    return res;
}

