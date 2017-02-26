//
//  455.cpp
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
#include <cmath>

using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    
    int x = 0;
    for (int i = 0; x < g.size() && i < s.size(); i++) {
        if (g[x] <= s[i]) x++;
    }
    
    return x;
}


