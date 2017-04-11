//
//  475.cpp
//  LeetCode
//
//  Created by Narikbi on 12.04.17.
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

int findRadius(vector<int>& houses, vector<int>& heaters) {
    
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    
    int i = 0;
    int res = 0;
    
    for (int house : houses) {
        while (i < heaters.size()-1 && heaters[i] + heaters[i+1] <= house * 2) {
            i++;
        }
        res = max(res, abs(heaters[i] - house));
    }
    
    return res;
    
}

