//
//  516.cpp
//  LeetCode
//
//  Created by Narikbi on 28.02.17.
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

int longestPalindromeSubseq(string s) {
    
    int dp[1001][1001] = {0};
    int n = s.size();
    
    for (int i = s.size()-1; i >= 0; i--) {
        dp[i][i] = 1;
        for (int j = i+1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                dp[i][j] = dp[i+1][j-1] + 2;
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[0][n-1];
}


//int main(int argc, const char * argv[]) {
//    
//    cout << longestPalindromeSubseq("bbbab") << endl;
//    
//    return 0;
//}

