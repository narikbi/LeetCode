//
//  47.cpp
//  LeetCode
//
//  Created by Narikbi on 08.05.17.
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

void allSubsets(vector<int>& nums, int index, set<vector<int>> &res) {
    
    if (index >= nums.size()) {
        res.insert(nums);
        return;
    }
    
    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        allSubsets(nums, index+1, res);
        swap(nums[i], nums[index]);
    }
    
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    
    set<vector<int>> res;
    allSubsets(nums, 0, res);
    
    vector<vector<int>> v;
    for (auto x : res) {
        v.push_back(x);
    }
    
    return v;
}

