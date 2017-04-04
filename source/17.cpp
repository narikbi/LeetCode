//
//  17.cpp
//  LeetCode
//
//  Created by Narikbi on 05.04.17.
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

vector<string> letterCombinations(string digits) {
    
    if (digits.size() == 0) return {};
    
    vector<string> res;
    vector<string> charmap = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    res.push_back("");
    
    for (int i = 0; i < digits.size(); i++) {
        string s = charmap[digits[i]-'0'];
        vector<string> v;
        
        for (int j = 0; j < s.size(); j++) {
            for (int k = 0; k < res.size(); k++) {
                v.push_back(res[k] + s[j]);
            }
        }
        
        res = v;
    }
    
    return res;
}
