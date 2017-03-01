//
//  46.cpp
//  LeetCode
//
//  Created by Narikbi on 02.03.17.
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

void allSubsets(vector<int>& nums, int index, vector<vector<int>> &res) {
    
    if (index >= nums.size()) {
        res.push_back(nums);
        return;
    }
    
    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        allSubsets(nums, index+1, res);
        swap(nums[i], nums[index]);
    }
    
}

vector<vector<int>> permute(vector<int>& nums) {
    
    vector<vector<int>> res;
    allSubsets(nums, 0, res);
    
    return res;
}

//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {1, 2, 3};
//    vector<vector<int>> res = permute(v);
//    
//    for (auto x : res) {
//        for (int y : x) {
//            cout << y << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


