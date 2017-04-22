//
//  278.cpp
//  LeetCode
//
//  Created by Narikbi on 23.04.17.
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

bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    if (n <= 1) return n;
    
    int low = 1;
    int high = n;
    int mid = 0;
    while (low < high) {
        mid = low + (high-low)/2;
        
        if (isBadVersion(mid)) {
            high = mid;
        } else {
            low = mid+1;
        }
    }
    
    return low;
}

