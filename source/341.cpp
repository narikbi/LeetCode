//
//  341.cpp
//  LeetCode
//
//  Created by Narikbi on 05.03.17.
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

class NestedInteger {
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;
    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};

class NestedIterator {
private:
    vector<int> v;
    int pos = 0;
    
    void flatten(vector<NestedInteger> nestedList) {
        
        for (auto x : nestedList) {
            if (x.isInteger()) {
                v.push_back(x.getInteger());
            } else {
                flatten(x.getList());
            }
        }
    }
    
public:
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList);
        pos = 0;
    }
    
    int next() {
        return pos < v.size();
    }
    
    bool hasNext() {
        return v[pos++];
    }
};



