//
//  16.cpp
//  LeetCode
//
//  Created by Narikbi on 12.04.17.
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

int threeSumClosest(vector<int>& nums, int target) {
    
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    int distance = INT_MAX;
    int result = 0;
    
    for (int i = 0; i < n-2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        
        int a = nums[i];
        int low = i+1;
        int high = n-1;
        
        while (low < high) {
            int b = nums[low];
            int c = nums[high];
            int sum = a+b+c;
            
            if (sum - target == 0) {
                return sum;
            } else {
                
                if (abs(sum-target) < distance) {
                    distance = abs(sum-target);
                    result = sum;
                }
                
                if (sum - target > 0) {
                    while (high > 0 && nums[high] == nums[high-1]) high--;
                    high--;
                } else {
                    
                    while (low < n && nums[low] == nums[low+1]) low++;
                    low++;
                }
                
            }
            
        }
    }
    
    return result;
    
}


