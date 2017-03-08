//
//  53.cpp
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


int maxSubArray(vector<int>& nums) {
    
    int sum = 0;
    int mx = INT_MIN;
    
    for (int x : nums) {
        if(sum < 0) {
            sum = x;
        } else {
            sum += x;
        }
        
        mx = max(mx, sum);
    }
    
    return mx;
}


