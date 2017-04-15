//
//  532.cpp
//  LeetCode
//
//  Created by Narikbi on 16.04.17.
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

int findPairs(vector<int>& nums, int k) {
    
    if (k < 0) return 0;
    
    unordered_map<int, int> m;
    
    for (int x : nums) {
        m[x]++;
    }
    
    int res = 0;
    if (k != 0) {
        for (auto it : m) {
            if (m.find(it.first + k) != m.end()) {
                res++;
            }
        }
    } else {
        for (auto it : m) {
            if (it.second > 1) {
                res++;
            }
        }
    }
    
    return res;
}


