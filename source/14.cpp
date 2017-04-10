//
//  14.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

string longestCommonPrefix(vector<string> &strs) {
    
    string word;
    if (strs.size() <= 0) return word;
    
    for (int i = 1; i <= strs[0].size(); i++) {
        string w = strs[0].substr(0, i);
        bool match = true;
        int j = 1;
        for (j = 1; j < strs.size(); j++) {
            if (i > strs[j].size() || w != strs[j].substr(0, i)) {
                match = false;
                break;
            }
        }
        
        if (!match) {
            return word;
        }
        
        word = w;
    }
    
    return word;
}

