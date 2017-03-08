//
//  70.cpp
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


int climbStairs(int n) {
    
    vector<int> dp(n+1, 0);
    
    dp[0] = 1;
    dp[1] = 1;
    
    for (int i = 2; i < n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n-1];
}



