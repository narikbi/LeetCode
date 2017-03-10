//
//  77.cpp
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

vector<vector<int>> res;

void rec(vector <int> &sol, int n, int k, int start) {
    
    if (k == 0) {
        sort(sol.begin(), sol.end());
        res.push_back(sol);
        return;
    }
    
    for (int i = start; i <= n; i++) {
        sol.push_back(i);
        rec(sol, n, k-1, i);
        sol.pop_back();
    }
    
}

vector<vector<int>> combine(int n, int k) {
    
    vector<int> sol;
    rec(sol, n, k, 1);
    
    return res;
}


