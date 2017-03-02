//
//  96.cpp
//  LeetCode
//
//  Created by Narikbi on 03.03.17.
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

int numTrees(int n) {
    
    vector<int> dp (n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i-j-1];
        }
    }
    
    return dp[n];
}



