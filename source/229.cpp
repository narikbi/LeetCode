//
//  229.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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
#include <unordered_set>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    
    if (nums.size() <= 1) return nums;
    
    int majority1 = 0;
    int majority2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    
    for (int item : nums) {
        
        if (cnt1 == 0 && majority2 != item) {
            majority1 = item;
            cnt1 = 1;
        } else if (majority1 == item) {
            cnt1++;
        } else if (cnt2 == 0) {
            majority2 = item;
            cnt2++;
        } else if (majority2 == item) {
            cnt2++;
        } else {
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1 = cnt2 = 0;
    for (int item : nums) {
        if (majority1 == item) cnt1++;
        else if (majority2 == item) cnt2++;
    }
    
    vector<int> res;
    if (cnt1 > nums.size() / 3) res.push_back(majority1);
    if (cnt2 > nums.size() / 3) res.push_back(majority2);
    
    return res;
}

