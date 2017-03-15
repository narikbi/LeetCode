//
//  162.cpp
//  LeetCode
//
//  Created by Narikbi on 16.03.17.
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

int findPeakElement(vector<int>& nums) {
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i-1]) {
            return i-1;
        }
    }
    return nums.size()-1;
}

