//
//  260.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    
    int aXorB = 0;
    for (int i = 0; i < nums.size(); i++) {
        aXorB ^= nums[i];
    }
    
    int lastBit = (aXorB & (aXorB -1)) ^ aXorB;
    int valA = 0, valB = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] & lastBit) {
            valA ^= nums[i];
        } else {
            valB ^= nums[i];
        }
    }
    
    return {valA, valB};
}

