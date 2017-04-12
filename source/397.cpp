//
//  397.cpp
//  LeetCode
//
//  Created by Narikbi on 13.04.17.
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

int integerReplacement(int n) {
    
    if (n <= 1) return 0;
    if (n == INT_MAX) return 32;
    
    if (n%2 == 0) return integerReplacement(n/2) + 1;
    return min(integerReplacement(n+1), integerReplacement(n-1)) + 1;
    
}

