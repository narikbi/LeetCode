//
//  121.cpp
//  LeetCode
//
//  Created by Narikbi on 05.03.17.
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

int maxProfit(vector<int>& prices) {
    
    int mx = INT_MIN;
    int begin = 0;
    int end = 0;
    
    for (int i = 0; i < prices.size(); i++) {
        
        end = i;
        
        
        int diff = prices[end] - prices[begin];
        if (diff <= 0) {
            begin = i;
        }
        
        if (diff > mx) {
            mx = diff;
        }
    }
    
    return mx;
}

