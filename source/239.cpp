//
//  239.cpp
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

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    
    deque <int> q;
    vector<int> ans;
    
    for (int i = 0; i < nums.size(); i++) {
        if (!q.empty() && q.front() == i-k) {
            q.pop_front();
        }
        
        while (!q.empty() && nums[q.back()] < nums[i]) {
            q.pop_back();
        }
        
        q.push_back(i);
        
        if (i >= k-1) {
            ans.push_back(nums[q.front()]);
        }
    }
    
    return ans;
}


