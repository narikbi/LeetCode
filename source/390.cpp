//
//  390.cpp
//  LeetCode
//
//  Created by Narikbi on 07.03.17.
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

using namespace std;



int lastRemaining(int n) {
    
    stack<int> st;
    while (n > 1) {
        n /= 2;
        st.push(n);
    }
    
    int res = 1;
    while (!st.empty()) {
        res = 2 * (1 + st.top() - res);
        st.pop();
    }
    
    return res;
}




