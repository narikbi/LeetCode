//
//  441.cpp
//  LeetCode
//
//  Created by Narikbi on 18.03.17.
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

int arrangeCoins(int n) {
    return sqrt(2 * (long)n + 1 / 4.0) - 1 / 2.0;
}
