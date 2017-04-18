//
//  365.cpp
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

bool canMeasureWater(int x, int y, int z) {
    return z == 0 || (z - x <= y && z % __gcd(x, y) == 0);
}

