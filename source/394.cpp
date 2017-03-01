//
//  394.cpp
//  LeetCode
//
//  Created by Narikbi on 02.03.17.
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

bool isDigit(char c) {
    return ('0' <= c && c <= '9');
}

string rec(string s, int &i) {
    
    string res = "";
    
    while (i < s.size() && s[i] != ']') {
        if (!isDigit(s[i])) {
            res += s[i];
            i++;
        } else {
            int n = 0;
            while (i < s.size() && isDigit(s[i])) {
                n = n * 10 + s[i] - '0';
                i++;
            }
            
            i++;
            string t = rec(s, i);
            i++;
            while (n > 0) {
                res += t;
                n--;
            }
            
        }
    }
    
    
    return res;
}

string decodeString(string s) {
    
    int i = 0;
    return rec(s, i);
    
}

//int main(int argc, const char * argv[]) {
//    
//    
//    return 0;
//}
