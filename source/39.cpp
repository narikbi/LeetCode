//
//  39.cpp
//  LeetCode
//
//  Created by Narikbi on 16.03.17.
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

void rec(vector <int> &arr, int target, int begin, vector<int>& candidates) {
    
    if (target == 0) {
        res.push_back(arr);
    } else {
        for (int i = begin; i < candidates.size() && candidates[i] <= target; i++) {
            arr.push_back(candidates[i]);
            rec(arr, target - candidates[i], i, candidates);
            arr.pop_back();
        }
    }
    
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
    sort(candidates.begin(), candidates.end());
    
    vector<int> v;
    rec(v, target, 0, candidates);
    
    return res;
    
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v= {8,7,4,3};
//    vector<vector<int>> r = combinationSum(v, 11);
//    
//    for (auto vv : r) {
//        for (auto x : vv) {
//            cout << x << " " ;
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}


