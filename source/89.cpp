//
//  89.cpp
//  LeetCode
//
//  Created by Narikbi on 05.03.17.
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

vector<int> grayCode(int n) {
    vector <int> res;
    for (int i = 0; i < 1 << n; i++) {
        res.push_back(i ^ (i / 2));
    }
    return res;
}

