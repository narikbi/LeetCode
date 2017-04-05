//
//  49.cpp
//  LeetCode
//
//  Created by Narikbi on 06.04.17.
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

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    vector<vector<string>> res;
    
    map <string, int> m;
    
    for (int i = 0; i < strs.size(); i++) {
        string s = strs[i];
        
        sort(s.begin(), s.end());
        
        if (m.find(s) == m.end()) {
            vector<string> v;
            v.push_back(strs[i]);
            res.push_back(v);
            m[s] = res.size()-1;
        } else {
            res[m[s]].push_back(strs[i]);
        }
    }
    
    for (int i = 0; i < res.size(); i++) {
        sort(res[i].begin(), res[i].end());
    }
    
    return res;
}
