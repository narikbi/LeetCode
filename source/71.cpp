//
//  71.cpp
//  LeetCode
//
//  Created by Narikbi on 24.04.17.
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


string simplifyPath(string path) {
    
    string res, tmp;
    vector<string> st;
    
    stringstream ss(path);
    
    while (getline(ss, tmp, '/')) {
        if (tmp == "" || tmp == ".") continue;
        if (tmp == ".." && !st.empty()) {
            st.pop_back();
        } else if (tmp != "..") st.push_back(tmp);
    }
    
    for (string s : st) {
        res += "/" + s;
    }
    
    return res.empty() ? "/" : res;
}


