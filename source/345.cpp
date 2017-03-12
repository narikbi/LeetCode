//
//  345.cpp
//  LeetCode
//
//  Created by Narikbi on 12.03.17.
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

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o')
    || (c == 'A' || c == 'E' || c == 'U' || c == 'I' || c == 'O');
}

string reverseVowels(string s) {
    
    string vowels = "";
    for (char c : s) {
        if (isVowel(c)) vowels = c + vowels;
    }
    
    int pos = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isVowel(s[i])) {
            s[i] = vowels[pos++];
        }
    }
    
    return s;
    
}


