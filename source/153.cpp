//
//  153.cpp
//  LeetCode
//
//  Created by Narikbi on 09.03.17.
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

int findMin(vector<int>& nums) {
    
    int low = 0;
    int high = nums.size()-1;
    
    while (low < high) {
        if (nums[low] < nums[high]) {
            return nums[low];
        }
        
        int mid = (low + high) / 2;
        if (nums[low] <  nums[mid]) {
            low = mid+1;
        } else {
            high = mid;
        }
    }
    
    return nums[low];
}

