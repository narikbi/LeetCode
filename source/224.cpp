//
//  224.cpp
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
    
    int result = 0;
    int number = 0;
    int sign = 1;
    stack<int> st;
    
    for (int i = 0; i < s.size(); i++) {
        
        char c = s[i];
        
        if (isdigit(c)) {
            number = number * 10 + (c - '0');
        }else if(c == '+'){
            result += sign * number;
            number = 0;
            sign = 1;
            
        }else if(c == '-'){
            result += sign * number;
            number = 0;
            sign = -1;
        }else if(c == '('){
            //we push the result first, then sign;
            st.push(result);
            st.push(sign);
            //reset the sign and result for the value in the parenthesis
            sign = 1;
            result = 0;
            
        }else if(c == ')'){
            result += sign * number;
            number = 0;
            result *= st.top();    //stack.pop() is the sign before the parenthesis
            st.pop();
            result += st.top();   //stack.pop() now is the result calculated before the parenthesis
            st.pop();
        }
    }
    
    if (number != 0) result += sign * number;
    
    return result;
}

