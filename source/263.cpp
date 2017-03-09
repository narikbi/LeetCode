//
//  263.cpp
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
#include <unordered_map>

using namespace std;

bool isUgly(int num) {
    
    for (int i = 2; i <= 5 && num > 0; i++) {
        while (num%i == 0) num /= i;
    }
    return num == 1;
}
