//
//  31.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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

void nextPermutation(vector<int>& nums) {
    
    if (nums.size() <= 1) return;
    
    for (int i = nums.size()-1; i >= 0; i--) {
        
        if (nums[i-1 < nums[i]]) {
            int j = nums.size()-1;
            while (nums[i-1] >= nums[j]) {
                j--;
            }
            
            int tmp = nums[i-1];
            nums[i-1] = nums[j];
            nums[j] = tmp;
            
            sort(nums.begin()+i, nums.end());
            return;
        }
        
        
        if (i == 1) {
            reverse(nums.begin(), nums.end());
            return;
        }
    }
    
}

