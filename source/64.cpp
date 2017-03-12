//
//  64.cpp
//  LeetCode
//
//  Created by Narikbi on 12.03.17.
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

int minPathSum(vector<vector<int>>& grid) {
    if (grid.size() <= 0) return 0;
    
    int n = grid.size();
    int m = grid[0].size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int top = i-1 < 0 ? INT_MAX : grid[i-1][j];
            int left = j-1 < 0 ? INT_MAX : grid[i][j-1];
            
            if (top == INT_MAX && left == INT_MAX) {
                continue;
            }
            
            grid[i][j] += (top < left) ? top : left;
            
        }
    }
    
    return grid[n-1][m-1];
}

