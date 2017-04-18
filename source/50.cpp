//
//  50.cpp
//  LeetCode
//
//  Created by Narikbi on 19.04.17.
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

double myPow(double x, long long n) {
    
    if (n == 0) return 1;
    if (n == 1) return x;
    if (n < 0) {
        n = -n;
        x = 1/x;
    }
    
    if (n%2 == 0) {
        return myPow(x*x, n/2);
    } else {
        return x * myPow(x*x, n/2);
    }
}

