//
//  91.cpp
//  LeetCode
//
//  Created by Narikbi on 08.05.17.
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

int check(char c) {
    return !isdigit(c) || c == '0' ? 0 : 1;
}

int check(char c1, char c2) {
    return c1 == '1' || (c1 == '2' && c2 <= '6') ? 1 : 0;
}

int numDecodings(string s) {
    
    if (s.size() == 0) return 0;
    if (s.size() == 1) return check(s[0]);
    
    vector<int> dp (s.size() + 1, 0);
    
    dp[0] = check(s[0]);
    dp[1] = check(s[0]) * check(s[1]) + check(s[0], s[1]);
    
    for(int i = 2; i < s.size(); i++) {
        if (!isdigit(s[i])) break;
        if (check(s[i])) {
            dp[i] = dp[i-1];
        }
        
        if (check(s[i-1], s[i])) {
            dp[i] += dp[i-2];
        }
    }
    
    return dp[s.size()-1];
    
}

