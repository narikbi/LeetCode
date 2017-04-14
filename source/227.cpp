//
//  227.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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


int calculate(string s) {
    
    int number = 0;
    stack<int> st;
    char sign = '+';
    
    
    for (int i = 0; i<s.size(); i++) {
        int c = s[i];
        
        if (isdigit(c)) {
            number = number * 10 + (c-'0');
        } else if (!isspace(c) || !isdigit(c) || i == s.size()-1) {
            if (sign == '+') {
                st.push(number);
            } else if (sign == '-') {
                st.push(-number);
            } else {
                
                int x = 0;
                if (sign == '*') {
                    x = st.top() * number;
                } else if (sign == '/') {
                    x = st.top() / number;
                }
                
                st.pop();
                st.push(x);
            }
            sign = s[i];
            number = 0;
        }
    }
    
    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    
    return sum;
}


