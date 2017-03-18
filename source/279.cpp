//
//  279.cpp
//  LeetCode
//
//  Created by Narikbi on 19.03.17.
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

int numSquares(int n) {
    if ( n <=0 ) return 0;
    
    int *dp = new int[n+1];
    dp[0] = 0;
    
    for (int i=1; i<=n; i++ ) {
        int m = n;
        for (int j=1; i-j*j >= 0; j++) {
            m = min (m, dp[i-j*j] + 1);
        }
        dp[i] = m;
    }
    
    return dp[n];
    delete [] dp;
}


