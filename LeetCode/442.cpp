//
//  442.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;


vector<int> findDuplicates(vector<int>& nums) {
    
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i])-1;
        if (nums[index] < 0) {
            res.push_back(index+1);
        }
        nums[index] = -nums[index];
    }
    
    return res;
}

//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {4,3,2,7,8,2,3,1};
//    vector<int> r = findDuplicates(v);
//    for (const auto& p : r) {
//        cout << p << " ";
//    }
//
//    return 0;
//}





