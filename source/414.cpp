//
//  414.cpp
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

int thirdMax(vector<int>& nums) {
    
    int n = 3;
    
    set <int> topN;
    for (auto x : nums) {
        topN.insert(x);
        if (topN.size() > n) {
            topN.erase(topN.begin());
        }
    }
    
    return topN.size() >= n ? *(topN.begin()) : *(topN.rbegin());
    
}

