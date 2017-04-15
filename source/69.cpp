//
//  69.cpp
//  LeetCode
//
//  Created by Narikbi on 16.04.17.
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

typedef long long LL;

int sqrt(int x) {
    
    if (x <= 0) return 0;
    
    int high = x/2 + 1;
    int low = 0;
    
    while (low <= high) {
        
        int mid = low + (high-low)/2;
        LL sq = (LL)mid * (LL)mid;
        if (sq == x) return mid;
        
        if (sq < x) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    
    return high;
}



