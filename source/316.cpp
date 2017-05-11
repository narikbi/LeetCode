//
//  316.cpp
//  LeetCode
//
//  Created by Narikbi on 09.05.17.
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

string removeDuplicateLetters(string s) {
    
    const int ASCII_LEN = 256;
    vector<int> counter (ASCII_LEN, 0);
    vector<bool> visited (ASCII_LEN, false);
    
    for (char ch : s) {
        counter[ch]++;
    }
    
    string result;
    for (char ch : s) {
        counter[ch]--;
        
        if (visited[ch]) continue;
        
        while (!result.empty() && ch < result.back() && counter[result.back()]) {
            visited[result.back()] = false;
            result.pop_back();
        }
        
        result += ch;
        visited[ch] = true;
    }
    
    return result;
}


