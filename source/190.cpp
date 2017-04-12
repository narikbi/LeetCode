//
//  190.cpp
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

uint32_t reverseBits(uint32_t n) {
    uint32_t ret = 0;
    
    for (int i = 0; i < 32; i++) {
        ret = (ret * 2) + (n & 0x1);
        n /= 2;
    }
    
    return ret;
}


