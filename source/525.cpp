//
//  525.cpp
//  LeetCode
//
//  Created by Narikbi on 02.05.17.
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

int findMaxLength(vector<int>& nums) {
    
    int n = nums.size();
    map <int, int> m;
    m[0] = -1;
    
    int zero = 0;
    int one = 0;
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) zero++;
        else one++;
        
        int sum = zero - one;
        if (m.count(sum)) {
            ans = max(ans, i-m[sum]);
        } else {
            m[sum] = i;
        }
    }
    
    return ans;
    
}


