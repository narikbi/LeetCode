//
//  268.cpp
//  LeetCode
//
//  Created by Narikbi on 25.02.17.
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


int missingNumber(vector<int>& nums) {
    
    int res = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        res ^= i;
        res ^= nums[i];
    }
    
    return res;
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {0, 1, 2, 3, 4, 5, 7};
//    cout << missingNumber(v);
//    
//    return 0;
//}


