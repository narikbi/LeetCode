//
//  434.cpp
//  LeetCode
//
//  Created by Narikbi on 15.03.17.
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

int countSegments(string s) {
    
    if (s == "") return 0;
    
    s += " ";
    int count = 0;
    int pos = 0;
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == ' ' && s[i-1] != ' ') {
            count++;
        }
    }
    return count;
}

