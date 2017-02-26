//
//  169.cpp
//  LeetCode
//
//  Created by Narikbi on 23.02.17.
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

using namespace std;

int majorityElement(vector<int>& nums) {
    
    map <int, int> m;
    for (int x : nums) {
        m[x]++;
        if (m[x] > nums.size()/2) {
            return x;
        }
    }
    
    return 0;
}

