//
//  240.cpp
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


bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    if (matrix.size() == 0) return false;
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    int col = m-1;
    int row = 0;
    
    while (row < n && col >= 0) {
        int x = matrix[row][col];
        if (x == target) {
            return true;
        } else if (x > target) {
            col--;
        } else {
            row++;
        }
    }
    
    return false;
}

