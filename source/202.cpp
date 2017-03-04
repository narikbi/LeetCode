//
//  202.cpp
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

int calc(int n) {
    int sum = 0;
    while (n > 0) {
        int x = n%10;
        sum += x * x;
        n /= 10;
    }
    
    return sum;
}

bool isHappy(int n) {
    
    if (n == 1) return true;
    
    map <int, bool> m;
    m[n] = true;
    
    while (n != 1) {
        n = calc(n);
        
        if (m.find(n) != m.end()) {
            return false;
        }
        
        m[n] = true;
    }
    
    return true;
}

