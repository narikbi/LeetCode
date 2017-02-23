//
//  494.cpp
//  LeetCode
//
//  Created by Narikbi on 24.02.17.
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

int res = 0;

int subsetSum(vector<int> v, int s) {
    
    vector<int> dp (s+1);
    dp[0] = 1;
    for (int x : v) {
        for (int i = s; i >= x; i--) {
            dp[i] += dp[i-x];
        }
    }
    
    return dp[s];
}

int findTargetSumWays(vector<int>& nums, int S) {
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    return S > sum || (S + sum) & 1 ? 0 : subsetSum(nums, (S + sum) / 2);
}

//int main(int argc, const char * argv[]) {
//    
//    
//    //    vector<int> v = {1, 1, 1, 1, 1};
//    vector<int> v = {1000};
//    cout << findTargetSumWays(v, 1000);
//    
//    
//    return 0;
//}
