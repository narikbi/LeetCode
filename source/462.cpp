//
//  462.cpp
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

int minMoves2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    int count = 0;
    int i = 0, j = nums.size()-1;
    while (i < j) {
        count += nums[j] - nums[i];
        i++;
        j--;
    }
    
    return count;
}
