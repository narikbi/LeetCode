//
//  380.cpp
//  LeetCode
//
//  Created by Narikbi on 10.03.17.
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

using namespace std;


class RandomizedSet {
private:
    unordered_map<int, int> valpos;
    vector<int> data;
    bool find(int val) {
        return (valpos.find(val) != valpos.end());
    }
    
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand(time_t(NULL));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (find(val)) return false;
        data.push_back(val);
        valpos[val] = data.size()-1;
        return true;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        if (!find(val)) return false;
        
        int _idx = valpos[val];
        int _val = data.back();
        
        data[_idx] = _val;
        valpos[_val] = _idx;
        
        valpos.erase(val);
        data.pop_back();
        
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return data[ rand() % data.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */





