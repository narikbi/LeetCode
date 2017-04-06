//
//  507.cpp
//  LeetCode
//
//  Created by Narikbi on 07.04.17.
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

using namespace std;

bool checkPerfectNumber(int num) {
    
    if (num == 1) return false;
    
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i + num / i;
        }
    }
    
    return sum == num;
}

