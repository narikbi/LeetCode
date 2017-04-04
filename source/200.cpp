//
//  200.cpp
//  LeetCode
//
//  Created by Narikbi on 05.04.17.
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

using namespace std;

int n = 0;
int m = 0;

void rec(vector<vector<char>>& grid, int row, int col) {
    
    if (row < 0 || col < 0 || row >= n || col >= m || grid[row][col] != '1') return;
    
    grid[row][col] = '0';
    
    rec(grid, row+1, col);
    rec(grid, row-1, col);
    rec(grid, row, col+1);
    rec(grid, row, col-1);
    
}

int numIslands(vector<vector<char>>& grid) {
    
    if (grid.size() == 0) {
        return 0;
    }
    
    n = grid.size();
    m = grid[0].size();
    
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == '1') {
                count++;
                rec(grid, i, j);
            }
        }
    }
    
    return count;
}

