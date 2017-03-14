//
//  75.cpp
//  LeetCode
//
//  Created by Narikbi on 15.03.17.
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

void sortColors(vector<int>& nums) {
    
    int redIndex = -1;
    int whiteIndex = -1;
    int blueIndex = -1;
    
    for (int i = 0; i < nums.size(); i++) {
        
        if (nums[i] == 0) {
            nums[++blueIndex] = 2;
            nums[++whiteIndex] = 1;
            nums[++redIndex] = 0;
            
        } else if (nums[i] == 1) {
            nums[++blueIndex] = 2;
            nums[++whiteIndex] = 1;
        } else if (nums[i] == 2) {
            nums[++blueIndex] = 2;
        }
        
    }
    
    
}
