//
//  217.cpp
//  LeetCode
//
//  Created by Narikbi on 24.02.17.
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

bool containsDuplicate(vector<int>& nums) {
    map <int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
        if (m[nums[i]] > 2) {
            return true;
        }
    }
    return false;
}



