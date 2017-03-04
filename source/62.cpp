//
//  62.cpp
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

int uniquePaths(int m, int n) {
    
    int dp[101][101] = {0};
    
    dp[0][0] = 1;
    
    for (int i = 0; i < n; i++) {
        dp[i][0] = 1;
    }
    for (int j = 0; j < m; j++) {
        dp[0][j] = 1;
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    
    return dp[n-1][m-1];
}


//int main(int argc, const char * argv[]) {
//    
//    cout << uniquePaths(1, 10);
//    
//    return 0;
//}

