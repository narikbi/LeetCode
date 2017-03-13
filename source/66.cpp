//
//  66.cpp
//  LeetCode
//
//  Created by Narikbi on 14.03.17.
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

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    
    int carry = 1;
    vector<int> v;
    
    while (digits.size() > 0) {
        int x = digits.back();
        digits.pop_back();
        x = x + carry;
        v.insert(v.begin(), x%10);
        carry = x / 10;
    }
    
    if (carry) {
        v.insert(v.begin(), carry);
    }
    
    return v;
}

