//
//  368.cpp
//  LeetCode
//
//  Created by Narikbi on 01.04.17.
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

vector<int> largestDivisibleSubset(vector<int>& nums) {
    
    vector<int> res;
    if (nums.size() == 0) return res;
    
    sort(nums.begin(), nums.end());
    
    vector <int> dp (nums.size()+1);
    dp[0] = 1;
    
    for (int i = 1; i < nums.size(); i++) {
        for (int j = i-1; j >= 0; j--) {
            if (nums[i] % nums[j] == 0) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    int maxIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        maxIndex = dp[i] > dp[maxIndex] ? i : maxIndex;
    }
    
    int temp = nums[maxIndex];
    int curDP = dp[maxIndex];
    
    for (int i = maxIndex; i >= 0; i--) {
        if (temp % nums[i] == 0 && dp[i] == curDP) {
            res.push_back(nums[i]);
            temp = nums[i];
            curDP--;
        }
    }
    
    return res;
}




