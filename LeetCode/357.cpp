//
//  357.cpp
//  LeetCode
//
//  Created by Narikbi on 22.02.17.
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

int countNumbersWithUniqueDigits(int n) {
    if (n == 0) return 1;
    
    int base = 9;
    int ans = 10;
    for (int i = 2; i <= n; i++) {
        base = base * (9 - i + 2);
        ans += base;
    }
    
    return ans;
}

