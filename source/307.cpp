//
//  307.cpp
//  LeetCode
//
//  Created by Narikbi on 28.04.17.
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

class NumArray {
private:
    vector<int> nums;
    vector<int> sums;
    int sz;
    
public:
    NumArray(vector<int> nums) {
        sz = nums.size();
        nums.resize(sz+1, 0);
        sums.resize(sz+1, 0);
        
        for (int i = 0; i < sz; i++) {
            update(i, nums[i]);
        }
    }
    
    void update(int i, int val) {
        
        int oldv = nums[i+1];
        for (int idx = i+1; idx <= sz; idx += (idx & (-idx))) {
            sums[idx] = sums[idx] - oldv + val;
        }
        nums[i+1] = val;
    }
    
    int sumRange(int i, int j) {
        return sumRange(j+1) - sumRange(i);
    }
    
    int sumRange(int i) {
        int s = 0;
        for (int idx = i; idx > 0; idx -= (idx & (-idx))) {
            s += sums[idx];
        }
        return s;
    }
    
};

