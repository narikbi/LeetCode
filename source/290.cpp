//
//  290.cpp
//  LeetCode
//
//  Created by Narikbi on 07.04.17.
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

vector <string> split(string str, char delimeter) {
    
    string tok;
    vector<string> v;
    stringstream ss(str);
    
    while (getline(ss, tok, delimeter)) {
        v.push_back(tok);
    }
    
    return v;
}

bool wordPattern(string pattern, string str) {
    
    unordered_map<char, string> dictPattern;
    unordered_map<string, char> dictString;
    
    vector<string> strs = split(str, ' ');
    
    if (strs.size() != pattern.size()) return false;
    
    for (int i = 0; i < pattern.size(); i++) {
        char ch = pattern[i];
        string s = strs[i];
        
        if (dictPattern.find(ch) == dictPattern.end()) {
            dictPattern[ch] = s;
        }
        
        if (dictString.find(s) == dictString.end()) {
            dictString[s] = ch;
        }
        
        if (dictString[s] != ch || dictPattern[ch] != s) {
            return false;
        }
        
    }
    
    return true;
}


