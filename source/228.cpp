//
//  228.cpp
//  LeetCode
//
//  Created by Narikbi on 14.04.17.
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


vector<string> summaryRanges(vector<int>& nums) {
    
    vector<string> res;
    
    if (nums.size() == 1) {
        return {to_string(nums[0])};
    }
    
    for (int i = 0; i < nums.size(); i++) {
        int x = nums[i];
        
        while (i+1 < nums.size() && nums[i+1]-nums[i] ==1) {
            i++;
        }
        
        if (x != nums[i]) {
            string s = to_string(x) + "->" + to_string(nums[i]);
            res.push_back(s);
        } else {
            string s = to_string(x);
            res.push_back(s);
        }
    }
    
    return res;
}

