//
//  423.cpp
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


string originalDigits(string s) {
    
    vector<int> count (10, 0);
    
    for (char c : s) {
        if (c == 'z') count[0]++;
        if (c == 'w') count[2]++;
        if (c == 'x') count[6]++;
        if (c == 's') count[7]++; // 6-7
        if (c == 'g') count[8]++;
        if (c == 'u') count[4]++;
        if (c == 'f') count[5]++; //4-5
        if (c == 'h') count[3]++; //3-8
        if (c == 'i') count[9]++; //9-8-5-6
        if (c == 'o') count[1]++; //1-0-4-2
    }
    
    count[7] -= count[6];
    count[5] -= count[4];
    count[3] -= count[8];
    count[9] = count[9] - count[8] - count[5] - count[6];
    count[1] = count[1] - count[0] - count[2] - count[4];
    string ans;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j < count[i]; j++) {
            ans += to_string(i);
        }
    }
    
    return ans;
}
