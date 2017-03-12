//
//  27.cpp
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

int removeElement(vector<int>& nums, int val) {
    
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            i --;
        }
    }
    
    return nums.size();
}

