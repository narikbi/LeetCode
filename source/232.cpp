//
//  232.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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

class MyQueue {
private:
    stack <int> s1, s2;
    
    void transfer(stack <int> &s1, stack <int> &s2) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        transfer(s1, s2);
        int x = s2.top();
        s2.pop();
        transfer(s2, s1);
        
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        transfer(s1, s2);
        int x = s2.top();
        transfer(s2, s1);
        return x;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return !s1.empty() && !s2.empty();
    }
};



