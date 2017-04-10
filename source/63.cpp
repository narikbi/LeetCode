//
//  63.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    
    int dp[101][101] = {0};
    
    dp[0][1] = 1;
    
    //    for (int i = 0; i < n; i++) {
    //        dp[i][0] = 1;
    //    }
    //    for (int j = 0; j < m; j++) {
    //        dp[0][j] = 1;
    //    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!obstacleGrid[i-1][j-1]) {
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
    }
    
    return dp[n][m];
    
}




