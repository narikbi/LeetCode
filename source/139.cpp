//
//  139.cpp
//  LeetCode
//
//  Created by Narikbi on 14.04.17.
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


bool wordBreak(string s, vector<string>& wordDict) {
    
    vector<bool> v(s.size()+1, false);
    
    for (int i = 0; i < s.size(); i++) {
        string w = s.substr(0, i+1);
        v[i] = (find(wordDict.begin(), wordDict.end(), w) != wordDict.end());
        
        if (v[i]) continue;
        
        for (int j = 0; j < i; j++) {
            if (v[j]) {
                w = s.substr(j+1, i-j);
                v[i] = (find(wordDict.begin(), wordDict.end(), w) != wordDict.end());
                if (v[i]) break;
            }
        }
    }
    
    return v.size() ? v[s.size()-1] : false;
}
