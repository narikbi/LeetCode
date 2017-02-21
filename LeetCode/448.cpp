//
//  448.cpp
//  LeetCode
//
//  Created by Narikbi on 17.02.17.
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

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[abs(nums[i])-1] > 0) {
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
        }
    }
    
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            res.push_back(i+1);
        }
    }
    
    return res;
}

