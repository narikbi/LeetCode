//
//  343.cpp
//  LeetCode
//
//  Created by Narikbi on 23.02.17.
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

using namespace std;


int integerBreak(int n) {
    
    vector <int> dp(n+1, 0);
    dp[1] = 0;
    
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i] = max(dp[i], max(j, dp[j]) * max(i-j, dp[i-j]));
        }
    }
    
    return dp[n];
}

