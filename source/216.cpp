//
//  216.cpp
//  LeetCode
//
//  Created by Narikbi on 27.02.17.
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

using namespace std;

vector<vector<int>> solutions;

void rec(vector <int> comb, int start, int k, int n) {
    
    if (k == comb.size() && n == 0) {
        solutions.push_back(comb);
        return;
    }
    
    for (int i = start; i <= 9; i++) {
        comb.push_back(i);
        rec(comb, i+1, k, n-i);
        comb.pop_back();
    }
    
}

vector<vector<int>> combinationSum3(int k, int n) {
    
    vector<int> comb;
    rec(comb, 1, k, n);
    
    return solutions;
}

