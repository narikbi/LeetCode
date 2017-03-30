//
//  299.cpp
//  LeetCode
//
//  Created by Narikbi on 31.03.17.
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

string getHint(string secret, string guess) {
    
    int bulls = 0;
    int cows = 0;
    
    vector<int> v1(10, 0);
    vector<int> v2(10, 0);
    
    for (int i = 0; i < secret.size(); i++) {
        char c1 = secret[i];
        char c2 = guess[i];
        if (c1 == c2) {
            bulls++;
        } else {
            v1[c1-'0']++;
            v2[c2-'0']++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cows += min(v1[i], v2[i]);
    }
    
    string res = to_string(bulls) + 'A' + to_string(cows) + 'B';
    return res;
}


