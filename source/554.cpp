//
//  554.cpp
//  LeetCode
//
//  Created by Narikbi on 08.05.17.
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


int leastBricks(vector<vector<int>>& wall) {
    if (wall.size() == 0) return 0;
    
    int count = 0;
    
    unordered_map<int, int> m;
    
    for (auto list : wall) {
        int len = 0;
        for (int i = 0; i < list.size()-1; i++) {
            len += list[i];
            if (m.count(len)) {
                m[len]++;
            } else {
                m[len] = 1;
            }
            
            count = max(count, m[len]);
        }
    }
    
    return wall.size()-count;
}

