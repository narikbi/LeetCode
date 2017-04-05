//
//  20.cpp
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

bool isValid(string s) {
    
    stack<char> st;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.size() == 0) return false;
            if (s[i] == ')' && st.top() != '(') return false;
            if (s[i] == '}' && st.top() != '{') return false;
            if (s[i] == ']' && st.top() != '[') return false;
            
            st.pop();
        }
    }
    
    return st.size() == 0;
}

