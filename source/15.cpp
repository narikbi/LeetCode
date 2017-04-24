//
//  15.cpp
//  LeetCode
//
//  Created by Narikbi on 25.04.17.
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

vector<vector<int>> threeSum(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    
    vector<vector<int>> res;
    
    for (int i = 0; i+2 < nums.size(); i++) {
        
        if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
            int low = i+1;
            int high = nums.size()-1;
            int sum = -nums[i];
            
            while (low < high) {
                if (nums[low] + nums[high] == sum) {
                    res.push_back({nums[low], nums[high], nums[i]});
                    
                    while (low < high && nums[low] == nums[low+1]) low++;
                    while (low < high && nums[high] == nums[high-1]) high--;
                    
                    low++;
                    high--;
                } else if (nums[low] + nums[high] < sum) {
                    low++;
                } else {
                    high--;
                }
            }
            
        }
        
    }
    
    return res;
    
}

