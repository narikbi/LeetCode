//
//  209.cpp
//  LeetCode
//
//  Created by Narikbi on 13.04.17.
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

int minSubArrayLen(int s, vector<int>& nums) {
    
    int minLen = nums.size();
    
    int begin = 0;
    int end = 0;
    int sum = 0;
    bool has = false;
    
    for (int i = 0; i < nums.size(); i++, end++) {
        sum += nums[i];
        
        while (sum >= s) {
            minLen = min(minLen, i-begin+1);
            sum -= nums[begin++];
            has = true;
        }
        
    }
    
    return has ? minLen : 0;
}


