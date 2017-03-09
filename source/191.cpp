//
//  191.cpp
//  LeetCode
//
//  Created by Narikbi on 10.03.17.
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


int hammingWeight(uint32_t n) {
    
    int res = 0;
    while (n > 0) {
        res += n%2;
        n /= 2;
    }
    
    return res;
}
