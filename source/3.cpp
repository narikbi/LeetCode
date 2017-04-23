//
//  3.cpp
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

int lengthOfLongestSubstring(string s) {
    
    unordered_map <char, int> m;
    
    int maxLen = 0;
    int lastPos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (m.find(s[i]) != m.end() && m[s[i]] > lastPos) {
            lastPos = m[s[i]];
        }
        
        if (i - lastPos > maxLen) {
            maxLen = i-lastPos;
        }
        m[s[i]] = i;
    }
    
    return maxLen;
}

