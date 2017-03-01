//
//  398.cpp
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

class Solution {
public:
    vector<int> v;
    Solution(vector<int> nums) {
        v = nums;
    }
    
    int pick(int target) {
        int count = 0;
        int res = -1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != target) continue;
            count++;
            if (count == 1) res = i;
            else {
                if (!(rand()%count)) res = i;
            }
        }
        return res;
    }
};
