//
//  11.cpp
//  LeetCode
//
//  Created by Narikbi on 18.03.17.
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

int maxArea(vector<int>& height) {
    
    int water = 0;
    
    int left = 0, right = height.size()-1;
    
    while (left < right) {
        
        int h = min(height[left], height[right]);
        water = max(water, (right-left) * h);
        
        while (height[left] <= h && left < right) left++;
        while (height[right] <= h && left < right) right--;
    }
    
    return water;
    
}

