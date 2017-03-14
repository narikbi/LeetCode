//
//  474.cpp
//  LeetCode
//
//  Created by Narikbi on 15.03.17.
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

using namespace std;

int findMaxForm(vector<string>& strs, int m, int n) {
    
    int zeros = 0;
    int ones = 0;
    
    vector<vector<int>> dp( m+1 , vector<int> (n+1, 0));
    
    for (string s : strs) {
        zeros = 0;
        ones = 0;
        
        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }
        
        for (int i = m; i >= zeros; i--) {
            for (int j = n; j >= ones; j--) {
                dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1);
            }
        }
    }
    
    return dp[m][n];
}

