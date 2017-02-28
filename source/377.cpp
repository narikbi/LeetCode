//
//  377.cpp
//  LeetCode
//
//  Created by Narikbi on 01.03.17.
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

int combinationSum4(vector<int>& nums, int target) {
    
    sort(nums.begin(), nums.end());
    vector <int> res (target + 1, 0);
    for (int i = 1; i < res.size(); i++) {
        for (int x : nums) {
            if (x > i) break;
            else if (x == i) {
                res[i]++;
            } else {
                res[i] += res[i-x];
            }
        }
    }
    return res[target];
}


//
//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {1, 2, 3};
//    cout << combinationSum4(v, 4) << endl;
//    
//    return 0;
//}
//

