//
//  28.cpp
//  LeetCode
//
//  Created by Narikbi on 16.04.17.
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


int strStr(string haystack, string needle) {
    
    if (needle.size() > haystack.size()) return -1;
    if (haystack == needle) return 0;
    
    
    for (int i = 0; i < haystack.size()-needle.size(); i++) {
        string s = haystack.substr(i, needle.size());
        if (s == needle) {
            return i;
        }
    }
    
    return -1;
}


