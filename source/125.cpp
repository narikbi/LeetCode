//
//  125.cpp
//  LeetCode
//
//  Created by Narikbi on 21.04.17.
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

bool isPalindrome(string s) {
    
    if (s.size() == 0) return true;
    
    string text = "";
    
    for (char c : s) {
        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || isdigit(c)) {
            c = tolower(c);
            text += c;
        }
    }
    
    if (text.size() == 0) return true;
    
    int left = 0;
    int right = text.size()-1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
    
}

