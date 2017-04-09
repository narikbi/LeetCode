//
//  58.cpp
//  LeetCode
//
//  Created by Narikbi on 10.04.17.
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

int lengthOfLastWord(string s) {
    
    int len = 0;
    int tail = s.size()-1;
    while (tail >= 0 && s[tail] == ' ') tail--;
    while (tail >= 0 && s[tail] != ' ') {
        len++;
        tail--;
    }
    
    return len;
}

