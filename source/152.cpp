//
//  152.cpp
//  LeetCode
//
//  Created by Narikbi on 23.04.17.
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


int maxProduct(vector<int>& nums) {
    
    if (nums.size() == 0) return 0;
    
    int res = nums.front();
    
    for (int i = 0, imax = res, imin = res; i < nums.size(); i++) {
        
        if (nums[i] < 0) {
            swap(imin, imax);
        }
        
        imin = min(imin * nums[i], nums[i]);
        imax = max(imax * nums[i], nums[i]);
        
        res = max(res, imax);
        
    }
    
    return res;
    
}

