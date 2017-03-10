//
//  59.cpp
//  LeetCode
//
//  Created by Narikbi on 11.03.17.
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

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> m(n, vector<int>(n));
    
    int left = 0;
    int top = 0;
    int right = n-1;
    int down = n-1;
    int count = 1;
    
    while (left <= right) {
        for (int j = left; j <= right; j++) {
            m[top][j] = count++;
        }
        top++;
        
        for (int i = top; i <= down; i++) {
            m[i][right] = count++;
        }
        right--;
        
        for (int j = right; j >= left; j--) {
            m[down][j] = count++;
        }
        down--;
        
        for (int i = down; i >= top; i--) {
            m[i][left] = count++;
        }
        left++;
    }
    
    return m;
}


