//
//  485.cpp
//  LeetCode
//
//  Created by Narikbi on 16.02.17.
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

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    
    int count = 0;
    int ans = -1;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            count++;
        } else {
            count = 0;
        }
        ans = max(count, ans);
    }
    
    return ans;
}
