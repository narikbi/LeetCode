//
//  322.cpp
//  LeetCode
//
//  Created by Narikbi on 20.04.17.
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

int coinChange(vector<int>& coins, int amount) {
    
    int mx = INT_MAX;
    vector<int> dp(amount+1, mx);
    dp[0] = 0;
    
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    
    return dp[amount] > amount ? -1 : dp[amount];
}


