//
//  303.cpp
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

class NumArray {
private:
    vector<int> nums;
public:
    NumArray(vector<int> v) {
        
        this->nums = v;
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if (j == 0) return nums[j];
        return nums[j]-nums[i-1];
    }
};



