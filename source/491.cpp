//
//  491.cpp
//  LeetCode
//
//  Created by Narikbi on 09.03.17.
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

vector<vector<int>> res;
set<vector<int>> ss;

void rec(vector <int> nums, vector <int> holder, int index) {
    
    if (holder.size() >= 2) {
        ss.insert(holder);
    }
    
    int n = nums.size();
    for (int i = index; i < n; i++) {
        if (holder.size() == 0 || holder[holder.size()-1] <= nums[i]) {
            holder.push_back(nums[i]);
            rec(nums, holder, i+1);
            holder.erase(holder.begin() + holder.size()-1);
        }
    }
    
}

vector<vector<int>> findSubsequences(vector<int>& nums) {
    
    rec(nums, {}, 0);
    
    for (auto it : ss) {
        res.push_back(it);
    }
    return res;
    
}
//
//
//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {4,6,7,7};
//    
//    vector<vector<int>> res = findSubsequences(v);
//    
//    for (auto vv : res) {
//        for (auto x : vv) {
//            cout << x << " ";
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}
//



