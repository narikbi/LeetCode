//
//  167.cpp
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

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size()-1;
    
    while (numbers[left] + numbers[right] != target) {
        int val = numbers[left] + numbers[right];
        if (val < target) {
            left++;
        } else {
            right--;
        }
    }
    
    return {left+1, right+1};
}

