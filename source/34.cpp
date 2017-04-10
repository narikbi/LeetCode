//
//  34.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

vector<int> searchRange(vector<int>& nums, int target) {
    
    int low = 0;
    int high = nums.size();
    
    while (low < high) {
        
        int mid = (low + high) / 2;
        
        if (nums[mid] == target) {
            
            int begin = mid;
            int end = mid;
            
            while (begin > 0 && nums[begin] ==nums[begin-1]) {
                begin--;
            }
            
            while (end < nums.size()-1 && nums[end] ==nums[end+1]) {
                end++;
            }
            
            return {begin, end};
            
        } else if (nums[mid] < target) {
            low = mid+1;
        } else {
            high = mid;
        }
        
    }
    
    return {-1, -1};
    
}

