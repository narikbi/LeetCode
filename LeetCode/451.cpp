//
//  451.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;

string frequencySort(string s) {
    
    int counts[256] = {0};
    for (char c : s) counts[c]++;
    
    sort(s.begin(), s.end(), [&](char a, char b) {
        return counts[a] > counts[b] || (counts[a] == counts[b] && a < b);
    });
    
    return s;
}

