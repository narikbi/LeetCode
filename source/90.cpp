//
//  90.cpp
//  LeetCode
//
//  Created by Narikbi on 24.03.17.
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

void rec(int start, vector<int> &v, vector<int> nums) {
    
    res.push_back(v);
    
    for (int i = start; i < nums.size(); i++) {
        if (i == start || nums[i] != nums[i-1]) {
            v.push_back(nums[i]);
            rec(i+1, v, nums);
            v.pop_back();
        }
    }
}


vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    
    vector<int> v;
    rec(0, v, nums);
    
    return res;
}
//
//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {1,2,2};
//    
//    vector<vector<int>> vv = subsetsWithDup(v);
//    
//    for (auto x : vv) {
//        for (int xx : x) {
//            cout << xx << " ";
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}




