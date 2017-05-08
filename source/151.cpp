//
//  151.cpp
//  LeetCode
//
//  Created by Narikbi on 08.05.17.
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

void reverseWords(string &s) {
    
    if (s.length() == 0) return;
    
    string res = "";
    
    if (s[s.size()-1] == ' ') {
        int last = s.find_last_not_of(' ') + 1;
        s.erase(last, s.size()-last);
    }
    
    int first = s.find_first_not_of(' ', 0);
    
    while (first != string::npos) {
        int wend = s.find(' ', first);
        if (wend == string::npos) wend = s.length();
        
        string word = s.substr(first, wend-first);
        reverse(word.begin(), word.end());
        
        res += word;
        
        first = s.find_first_not_of(' ', wend);
        if (first == string::npos) break;
        
        res += ' ';
        
    }
    
    reverse(res.begin(), res.end());
    s.swap(res);
    
}

