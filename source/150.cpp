//
//  150.cpp
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

int evalRPN(vector<string>& tokens) {
    
    int a, b;
    
    stack<int> st;
    
    for (string s : tokens) {
        
        if (s == "+") {
            
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            
            st.push(x+y);
            
        } else if (s == "-") {
            
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            
            st.push(a-b);
            
        } else if (s == "/") {
            
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            
            st.push(a/b);
            
        } else if (s == "*") {
            
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            
            st.push(x*y);
        } else {
            st.push(atoi(s.c_str()));
        }
        
    }
    
    return st.top();
}


//int main(int argc, const char * argv[]) {
//    
//    vector<string> v= {"0","3","/"};
//    cout << evalRPN(v);
//    
//    
//    return 0;
//}
//







