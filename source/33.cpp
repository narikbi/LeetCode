//
//  33.cpp
//  LeetCode
//
//  Created by Narikbi on 08.04.17.
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

using namespace std;

int search(vector<int>& nums, int target) {
    
    if (nums.size() == 0) return -1;
    
    int low = 0;
    int high = nums.size();
    
    while (low < high) {
        int mid = (high+low)/2;
        
        if (nums[mid] == target) {
            return mid;
        }
        
        if (nums[low] <= nums[high]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid-1;
            } else {
                low = mid+1;
            }
        } else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
            
        }
    }
    
    return nums[low] == target ? low : -1;
}

