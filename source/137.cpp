//
//  137.cpp
//  LeetCode
//
//  Created by Narikbi on 03.03.17.
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

int singleNumber(vector<int>& nums) {
    
    int count[32] = {0};
    int result = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < nums.size(); j++) {
            if ((nums[j] >> i) & 1) {
                count[i]++;
            }
        }
        
        result |= ((count[i] % 3) << i);
    }
    
    return result;
}
