//
//  385.cpp
//  LeetCode
//
//  Created by Narikbi on 13.04.17.
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

class NestedInteger {
public:
    // Constructor initializes an empty nested list.
    NestedInteger();
    // Constructor initializes a single integer.
    NestedInteger(int value);
    // Return true if this NestedInteger holds a single integer, rather than a nested list
    bool isInteger() const;
    // Return the single integer that this NestedInteger holds, if it holds a single integ
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
    // Set this NestedInteger to hold a single integer.
    void setInteger(int value);
    // Set this NestedInteger to hold a nested list and adds a nested integer to it.
    void add(const NestedInteger &ni);
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};


bool isNum(char c) {
    return '0' <= c && c <= '9';
}

NestedInteger atoni(string &s, int &pos) {
    
    int sign = 1;
    int num = 0;
    if (s[pos] == '-') {
        sign = -1;
        pos++;
    }
    
    for (; pos < s.size(); pos++) {
        if (isNum(s[pos])) {
            num = num * 10 + s[pos] - '0';
        } else {
            break;
        }
    }
    
    return NestedInteger(sign * num);
}

NestedInteger helper(string &s, int&pos) {
    
    NestedInteger ni;
    
    while (s[pos] != ']' && pos < s.size()) {
        
        if (s[pos] == '-' || isNum(s[pos])) {
            ni.add(atoni(s, pos));
        } else if (s[pos] == '[') {
            pos++;
            ni.add(helper(s, pos));
        } else {
            pos++;
        }
    }
    
    pos++;
    return ni;
    
}


NestedInteger deserialize(string s) {
    
    if (s.size() == 0) return NestedInteger();
    int pos = 0;
    if (s[pos] != '[') return atoni(s, pos);
    
    pos++;
    return helper(s, pos);
    
}





