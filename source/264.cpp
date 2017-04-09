//
//  264.cpp
//  LeetCode
//
//  Created by Narikbi on 08.04.17.
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

int nthUglyNumber(int n) {
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    vector<int> v (1, 1);
    if (v.size()>=n) return v[n-1];
    
    while (v.size() < n) {
        int x = min(v[i]*2, min(v[j]*3, v[k]*5));
        if (x == v[i]*2) i++;
        if (x == v[j]*3) j++;
        if (x == v[k]*5) k++;
        v.push_back(x);
    }
    
    return v.back();
}

