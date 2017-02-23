//
//  392.cpp
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

bool isSubsequence(string s, string t) {
    
    if (s.length() == 0) return true;
    
    int indexS = 0, indexT = 0;
    while (indexT < t.length()) {
        if (t[indexT] == s[indexS]) {
            indexS++;
            if (indexS == s.length()) return true;
        }
        indexT++;
    }
    return false;
}



