//
//  221.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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


int maximalSquare(vector<vector<char>>& matrix) {
    
    int row = matrix.size();
    if (row <= 0) return 0;
    int col = matrix[0].size();
    
    int maxSize = 0;
    vector<vector<int>> dp (row, vector<int>(col));
    
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            dp[i][j] = matrix[i][j]-'0';
            
            if (i!= 0 && j != 0 && dp[i][j] != 0) {
                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
            }
            
            if (dp[i][j] > maxSize) {
                maxSize = dp[i][j];
            }
        }
    }
    
    return maxSize;
}

