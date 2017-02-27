//
//  287.cpp
//  LeetCode
//
//  Created by Narikbi on 28.02.17.
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

using namespace std;

int findDuplicate(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i])-1;
        if (nums[index] < 0) {
            return abs(nums[i]);
        }
        nums[index] = -nums[index];
    }
    
    return -1;
}




