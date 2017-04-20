//
//  324.cpp
//  LeetCode
//
//  Created by Narikbi on 21.04.17.
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
#include <unordered_set>

using namespace std;

void wiggleSort(vector<int>& nums) {
    
    sort(nums.begin(), nums.end(), [](int x, int y) { return x > y;});
    
    int half = nums.size()/2;
    
    for (int i = 0; i < half; i++) {
        int v = nums[half + i];
        nums.erase(nums.begin() + half + i );
        nums.insert(nums.begin() + (2 * i), v);
    }
}

