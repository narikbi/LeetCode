//
//  187.cpp
//  LeetCode
//
//  Created by Narikbi on 12.04.17.
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

vector<string> findRepeatedDnaSequences(string s) {
    
    unordered_map <size_t, int> stat;
    hash<string> hashFunc;
    
    vector<string> res;
    
    const int MAX_LEN = 10;
    
    for (int i = 0; i+MAX_LEN < s.size(); i++) {
        string word = s.substr(i, MAX_LEN);
        size_t hashCode = hashFunc(word);
        stat[hashCode]++;
        if (stat[hashCode] == 2) {
            res.push_back(word);
        }
    }
    
    return res;
    
}

