//
//  13.cpp
//  LeetCode
//
//  Created by Narikbi on 24.02.17.
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

int romanToInt(string s) {
    
    map <char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    int sum = m[s.size()];
    for (int i = s.size()-1; i >= 0; i--) {
        if (m[s[i]] < m[s[i+1]]) {
            sum -= m[s[i]];
        } else {
            sum += m[s[i]];
        }
    }
    return sum;
}

