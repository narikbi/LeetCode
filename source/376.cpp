//
//  376.cpp
//  LeetCode
//
//  Created by Narikbi on 23.03.17.
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


int wiggleMaxLength(vector<int>& nums) {
    
    int solution = 0;
    
    if (nums.size()) {
        
        solution = 1;
        int bigger = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                continue;
            } else if (nums[i] > nums[i-1]) {
                if (bigger == 0 || bigger == 2) {
                    bigger = 1;
                    solution++;
                }
            } else {
                if (bigger == 0 || bigger == 1) {
                    bigger = 2;
                    solution++;
                }
            }
        }
    }
    return solution;
}


