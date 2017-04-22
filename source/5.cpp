//
//  5.cpp
//  LeetCode
//
//  Created by Narikbi on 23.04.17.
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


string findPalindrome(string s, int left, int right) {
    
    int n = s.size();
    while (left >= 0 && right <= n-1 && s[left] == s[right]) {
        left--;
        right++;
    }
    
    return s.substr(left+1, right-left-1);
}

string longestPalindrome(string s) {
    
    string res;
    int n = s.size();
    
    if (n <= 1) return s;
    
    for (int i = 0; i < n-1; i++) {
        string str = findPalindrome(s, i, i);
        
        if (str.size() > res.size()) {
            res = str;
        }
        
        str = findPalindrome(s, i, i+1);
        
        if (str.size() > res.size()) {
            res = str;
        }
    }
    
    return res;
}


