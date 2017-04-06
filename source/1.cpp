//
//  1.cpp
//  LeetCode
//
//  Created by Narikbi on 07.04.17.
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

vector<int> twoSum(vector<int>& nums, int target) {
    
    unordered_map<int, int> m;
    
    vector<int> res;
    
    for (int i = 0; i < nums.size(); i++) {
        int x = target - nums[i];
        if (m.find(x) != m.end()) {
            
            res.push_back(m[x]);
            res.push_back(i);
            return res;
        }
        m[nums[i]] = i;
    }
    
    return {};
}


