//
//  38.cpp
//  LeetCode
//
//  Created by Narikbi on 01.04.17.
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


string countAndSay(int n) {
    
    if (n == 0) return "";
    
    string res = "1";
    
    n--;
    while (n > 0) {
        n--;
        string cur = "";
        for (int i = 0; i < res.size(); i++) {
            int count = 1;
            while (i + 1 < res.size() && res[i] == res[i+1]) {
                count++;
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }
    return res;
}




