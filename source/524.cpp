//
//  524.cpp
//  LeetCode
//
//  Created by Narikbi on 08.03.17.
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

string findLongestWord(string s, vector<string>& d) {
    
    string res = "";
    
    for (string dictWord : d) {
        int i = 0;
        for (char c : s) {
            if (i < s.size() && c == dictWord[i]) i++;
        }
        if (i == dictWord.size() && res.length() <= dictWord.length()) {
            if (dictWord.length() > res.length() || dictWord < res) {
                res = dictWord;
            }
        }
        
    }
    
    return res;
}


