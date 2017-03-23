//
//  284.cpp
//  LeetCode
//
//  Created by Narikbi on 23.03.17.
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

class Iterator {
    struct Data;
    Data* data;
public:
    Iterator(const vector<int>& nums);
    Iterator(const Iterator& iter);
    virtual ~Iterator();
    // Returns the next element in the iteration.
    int next();
    // Returns true if the iteration has more elements.
    bool hasNext() const;
};


class PeekingIterator : public Iterator {
private:
    bool m_hasNext;
    int m_next;
    
    void takeNext() {
        m_hasNext = Iterator::hasNext();
        if (m_hasNext) {
            m_next = Iterator::next();
        }
    }
    
public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        // Initialize any member here.
        // **DO NOT** save a copy of nums and manipulate it directly.
        // You should only use the Iterator interface methods.
        takeNext();
    }
    
    // Returns the next element in the iteration without advancing the iterator.
    int peek() {
        return m_next;
    }
    
    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next() {
        int temp = m_next;
        takeNext();
        return temp;
    }
    
    bool hasNext() const {
        return m_hasNext;
    }
};
