//
//  73.cpp
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

void setZeroes(vector<vector<int>>& a) {
    set <int> rows, cols;
    
    int n = a.size();
    int m = a[0].size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    
    set <int> :: iterator it;
    for (it = rows.begin(); it != rows.end(); it++) {
        int row = *it;
        for (int i = 0; i < m; i++) {
            a[row][i] = 0;
        }
    }
    
    set <int> :: iterator it2;
    for (it2 = cols.begin(); it2 != cols.end(); it2++) {
        int col = *it2;
        for (int i = 0; i < n; i++) {
            a[i][col] = 0;
        }
    }
}


