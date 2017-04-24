//
//  179.cpp
//  LeetCode
//
//  Created by Narikbi on 25.04.17.
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

static bool comp (string& s1, string& s2) { return s1+s2 > s2+s1; }

string largestNumber(vector<int> &num) {
    
    vector<string> v;
    for (int x : num) {
        v.push_back(to_string(x));
    }
    
    sort(v.begin(), v.end(), comp);
    
    string res;
    for (string s : v) {
        res += s;
    }
    
    if (res[0] == '0') return "0";


