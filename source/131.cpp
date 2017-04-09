//
//  131.cpp
//  LeetCode
//
//  Created by Narikbi on 10.04.17.
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

bool isPalindrome(string &s, int start, int end) {
    
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void partitionHelper(string &s, int start, vector<string> &output, vector<vector<string>> &result) {
    
    if (start == s.size()) {
        result.push_back(output);
        return;
    }
    
    for (int i = start; i < s.size(); i++) {
        if (isPalindrome(s, start, i)) {
            output.push_back(s.substr(start, i-start+1));
            partitionHelper(s, i+1, output, result);
            output.pop_back();
        }
    }
    
}

vector<vector<string>> partition(string s) {
    
    vector<vector<string>> res;
    vector<string> output;
    
    partitionHelper(s, 0, output, res);
    
    return res;
}
