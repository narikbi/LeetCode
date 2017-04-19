//
//  6.cpp
//  LeetCode
//
//  Created by Narikbi on 20.04.17.
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

string convert(string s, int nRows) {
    
    if (nRows <= 1 || nRows >= s.size()) return s;
    
    vector<string> r(nRows);
    int row = 0;
    int step = 1;
    for (int i = 0; i < s.size(); i++) {
        if (row == nRows-1) step = -1;
        if (row == 0) step = 1;
        
        r[row] += s[i];
        row += step;
    }
    
    string res;
    for (int i = 0; i < r.size(); i++) {
        res += r[i];
    }
    
    return res;
}


