//
//  40.cpp
//  LeetCode
//
//  Created by Narikbi on 08.04.17.
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

vector<vector<int>> res;

void rec(int begin, int currentSum, int target, vector<int> ans, vector<int>& candidates) {
    
    if (currentSum < 0) return;
    
    if (currentSum == 0) {
        res.push_back(ans);
        return;
    }
    
    for (int i = begin; i < candidates.size(); i++) {
        if (i > begin && candidates[i] == candidates[i-1]) continue;
        
        ans.push_back(candidates[i]);
        rec(i+1, currentSum-candidates[i], target, ans, candidates);
        ans.pop_back();
    }
    
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    
    if (candidates.size() == 0) return res;
    
    sort(candidates.begin(), candidates.end());
    
    rec(0, target, target, {}, candidates);
    
    return res;
}

