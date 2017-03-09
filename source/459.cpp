//
//  459.cpp
//  LeetCode
//
//  Created by Narikbi on 10.03.17.
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

using namespace std;

bool repeatedSubstringPattern(string s) {
    
    int n = s.length();
    if (s.length() < 2) return true;
    
    for (int len = 1; len <= n/2; len++) {
        if (n % len == 0) {
            
            string str = s.substr(0, len);
            string res = "";
            while (res.length() < n) {
                res += str;
            }
//            cout << res << endl;
            if (res == s) return true;
        }
    }
    return false;
}


