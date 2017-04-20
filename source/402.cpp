//
//  402.cpp
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

string removeKdigits(string num, int k) {
    
    while (k > 0) {
        int n = num.size();
        int i = 0;
        while (i+1 < n && num[i] <= num[i+1]) i++;
        num.erase(i, 1);
        k--;
    }
    
    int s = 0;
    while (s < num.size()-1 && num[s] == '0') s++;
    num.erase(0, s);
    
    return num == "" ? "0" : num;
}

