//
//  409.cpp
//  LeetCode
//
//  Created by Narikbi on 23.02.17.
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

using namespace std;


int longestPalindrome(string s) {
    
    int odds = 0;
    vector<int> counts(256);
    for (char c : s) {
        counts[c]++;
    }
    
    for (int x : counts) {
        odds += x & 1;
    }
    
    return s.size() - odds + (odds > 0);
}
