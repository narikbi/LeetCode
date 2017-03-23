//
//  74.cpp
//  LeetCode
//
//  Created by Narikbi on 23.03.17.
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

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int n = matrix.size();
    int m = n > 0 ? matrix[0].size() : 0;
    
    int low = 0;
    int high = n * m - 1;
    
    while (low < high) {
        
        int mid = (low + high) / 2;
        int r = mid / m;
        int c = mid % m;
        
        if (matrix[r][c] == target) {
            return true;
        }
        
        if (matrix[r][c] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return false;
}

