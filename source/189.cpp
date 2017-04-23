//
//  189.cpp
//  LeetCode
//
//  Created by Narikbi on 24.04.17.
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

void reverseArray(vector <int> &nums, int start, int end) {
    
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    
}

void rotate(vector<int>& nums, int k) {
    
    int n = nums.size();
    k %= n;
    
    reverseArray(nums, n-k, n-1);
    reverseArray(nums, 0, n-k-1);
    reverseArray(nums, 0, n-1);
    
}

