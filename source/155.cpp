//
//  155.cpp
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


class MinStack {
private:
    long long minVal = 0;
    stack<long long> st;
    
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if (st.empty()) {
            st.push(0);
            minVal = x;
        } else {
            st.push(x-minVal);
            if (x < minVal) minVal = x;
        }
    }
    
    void pop() {
        if (st.empty()) return;
        
        long long top = st.top();
        st.pop();
        
        if (top < 0) minVal = minVal - top;
    }
    
    int top() {
        long long top = st.top();
        
        if (top > 0) {
            return top + minVal;
        } else {
            return minVal;
        }
    }
    
    int getMin() {
        return minVal;
    }
};

