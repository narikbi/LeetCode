//
//  54.cpp
//  LeetCode
//
//  Created by Narikbi on 21.04.17.
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

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> res;
    if (matrix.size() == 0) return res;
    if (matrix.size() == 1) return matrix[0];
    
    int left = 0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    while (top != n/2 && left != m/2) {
        
        for (int col = left; col <= right; col++) {
            res.push_back(matrix[top][col]);
        }
        top++;
        
        for (int row = top; row <= bottom; row++) {
            res.push_back(matrix[row][right]);
        }
        right--;
        
        for (int col = right; col >= left; col--) {
            res.push_back(matrix[bottom][col]);
        }
        bottom--;
        
        for (int row = bottom; row >= top; row--) {
            res.push_back(matrix[row][left]);
        }
        left++;
        
    }
    
    return res;
}

