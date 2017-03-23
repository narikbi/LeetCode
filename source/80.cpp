//
//  80.cpp
//  LeetCode
//
//  Created by Narikbi on 23.03.17.
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

int removeDuplicates(vector<int>& nums) {
    
    int pos = 0;
    for (int x : nums) {
        if (pos < 2 || x > nums[pos-2]) nums[pos++] = x;
    }
    
    return pos;
}

